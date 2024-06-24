#include <iostream>

using namespace std;

int main()
{
    // membuat array
    int nilai[5];
    nilai[0] = 0;
    nilai[1] = 1;
    nilai[2] = 2;
    nilai[3] = 3;
    nilai[4] = 4;

    cout << &nilai[0] << " Nilainya adalah " << nilai[0] << endl;
    cout << &nilai[1] << " Nilainya adalah " << nilai[1] << endl;
    cout << &nilai[2] << " Nilainya adalah " << nilai[2] << endl;
    cout << &nilai[3] << " Nilainya adalah " << nilai[3] << endl;
    cout << &nilai[4] << " Nilainya adalah " << nilai[4] << endl;

    cout << endl << endl;
    // coba merubah dengan pointer
    int *ptr = nilai; // lansung nilai kara nilai itu outputnya lokasi memory
    *(ptr + 2) = 6; // mencoba merubah array yang kedua

    cout << &nilai[0] << " Nilainya adalah " << nilai[0] << endl;
    cout << &nilai[1] << " Nilainya adalah " << nilai[1] << endl;
    cout << &nilai[2] << " Nilainya adalah " << nilai[2] << endl;
    cout << &nilai[3] << " Nilainya adalah " << nilai[3] << endl;
    cout << &nilai[4] << " Nilainya adalah " << nilai[4] << endl;

    // bisa juga merubah dengan langsung
    nilai[3] = 10;

    cout << endl << endl;
    // untuk melihat jumlah data dalam array di c++ (karna di c++ tidak ada fungsi untuk mencari tahu panjang array)
    // kita cari tahu dulu size dari arraynya
    cout << "ukuran array " << sizeof(nilai) << " byte" << endl;
    // lalu kita bagi dengan nilai dari integer
    cout << "jumlah member array nya " << sizeof(nilai)/sizeof(int) << endl;

    return 0;
}
