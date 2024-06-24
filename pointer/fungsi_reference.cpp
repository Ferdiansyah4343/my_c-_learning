#include <iostream>
using namespace std;

void fungsi(int &b){
    cout << "address b " << &b << endl;
    cout << "nilai b " << b << endl;
}

void kuadrat(int &nilaiRef){
    nilaiRef = nilaiRef * nilaiRef;
}

int main()
{
    int a = 6;
    cout << "address a " << &a << endl;
    cout << "nilai a " << a << endl;

    fungsi(a);
    kuadrat(a);
    cout << "nilai a sekarang adalah " << a << endl;
    return 0;
}
