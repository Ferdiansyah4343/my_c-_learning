#include <iostream>
using namespace std;

void fungsi(int *b) {
    cout << "address b " << &b << endl;
    cout << "nilai b " << *b << endl; //dereferencing
}

void kuadrat(int *);


int main()
{
    int a = 5;
    cout << "address a " << &a << endl;
    cout << "nilai a " << a << endl;
    fungsi(&a);
    kuadrat(&a);
    cout << "nilai dari a: " << a << endl;
    return 0;
}


void kuadrat(int *valPtr){
    *valPtr = *valPtr * *valPtr;
}