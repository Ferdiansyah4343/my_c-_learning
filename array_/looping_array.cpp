#include <iostream>
using namespace std;

int main()
{
    // looping untuk array di c++
    /*
    for(deklarasi variabel : array){
        statemen
    }
    */

    int arrayNilai[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int nilai : arrayNilai)
    {
        cout << "address " << &nilai << " nilainya: " << nilai << endl;
    }
    cout << endl;
    for (int &nilaiRef : arrayNilai)
    {
        // manipulasi array dan membuatnya menjadi pangkat
        nilaiRef *= 2;
    }
    cout << endl;
    for (int &nilaiRef : arrayNilai)
    {
        cout << "address " << &nilaiRef << " nilainya: " << nilaiRef << endl;
    }
    return 0;
}
