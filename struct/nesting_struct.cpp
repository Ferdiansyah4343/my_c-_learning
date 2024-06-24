#include <iostream>
#include <string>

using namespace std;

struct aktor{
    string nama;
    int tahun_lahir;
};

struct film{
    string judul;
    string genre;
    int tahun_rilis;
    // struct aktor
    aktor pemeran_1;
    aktor pemeran_2;
};

int main()
{
    aktor aktor1 = {"John Doe", 1975};
    aktor aktor2 = {"Jane Lennon", 1980};

    film film1 = {"Inception", "Thriller", 2010, aktor1, aktor2};
    
    cout << film1.judul << endl;
    cout << "pemeran 1: " << film1.pemeran_1.nama << endl;
    return 0;
}