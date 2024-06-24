#include <iostream>
#include <array>

using namespace std;

int main()
{
    // membuat array dengan standard library
    // array<int, jumlah array> nama array
    array<int, 5> nilai;
    for(int i=0; i <= 4; i++){
        nilai[i]= i;
        cout << "nilai[" << i << "] = " << nilai[i];
        cout << " address: " << &nilai[i] << endl;
    }
    cout << endl;

    // ukuran array
    cout << "Ukuran: " << nilai.size() << endl;
    // mengambil address awal dari array
    cout << "address awal: " << nilai.begin() << endl;
    // mengambil address akhir dari array
    cout << "address akhir: " << nilai.end() << endl;
    // mengambil nilai dengan index
    cout << "nilai ke 2: " << nilai.at(2) << endl;
    return 0;
}
