#include <iostream>
#include <string>

using namespace std;

// struct: data yang dibentuk 
// dari beberapa data

struct buah {
    string warna;
    float berat;
    int harga;
    string rasa;
};

int main()
{
    buah apel;
    apel.warna = "merah";
    apel.berat = 0.5;
    apel.harga = 5000;
    apel.rasa = "manis";

    cout << apel.warna << endl;
    cout << apel.berat << endl;
    cout << apel.harga << endl;
    cout << apel.rasa << endl;
    return 0;
}
