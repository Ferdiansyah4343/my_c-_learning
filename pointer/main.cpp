#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5;

    // pointer
    int *ptr = &a;

    // int a mempunyai nilai dan alamat
    cout << "ini adalah nilai dari a: " << a << endl;
    cout << "ini alamat a: " << &a << endl;
    cout << "ini adalah alamat dari a: " << ptr << endl;

    // deferencing, mengambil data dari sebuah pointer
    cout << "ambil nilai dari pointer ptr: " << *ptr << endl;

    // reference

    cout << "address dari a " << &a << endl;
    cout << "nilai dari a adalah: " << a << endl << endl;

    int &b = a;

    cout << "nilai dari b " << b << endl;
    cout << "address dari b adalah " << &b << endl;

    b = 10;
    cout << "nilai dari a" << a << endl;
    cout << "nilai dari b" << b << endl;

    


    return 0;
}
