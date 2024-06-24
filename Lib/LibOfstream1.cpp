#include <iostream>
#include <fstream>
/*
fstream mencakup
ofstream | outputfile
ifstream | inputfile
fstream  | campuran ofstream dan ifstream
*/

using namespace std;

int main()
{
    ofstream myFile;
    // ios::out = operasi output, default
    // ios::app = menuliskan pada akhir baris
    // ios::trunc = membuat file jika tidak ada, dan jika ada akan dihapus dan dibuat baru

    myFile.open("data3.txt", ios::app);
    myFile << "\ntulis diakhir banget";
    myFile.close();

    // myFile.open("data1.txt", ios::out);
    // myFile << "tuliskan pada data 1";
    // myFile.close();

    myFile.open("data2.txt", ios::trunc);
    myFile << "tuliskan pada data 2";
    myFile.close();

    return 0;
}
