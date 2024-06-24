#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // inisialisasi variabel
    float a,b,hasil;
    char aritmatika;

    cout << "Selamat datang di program kalkulator\n\n";

    cout << "masukan nilai pertama: ";
    cin >> a;
    cout << "pilih operator(+,-,*,/): ";
    cin >> aritmatika;
    cout << "masukan nilai kedua: "; 
    cin >> b;

    if(aritmatika == '+'){
        hasil = a + b;
    } else if(aritmatika == '-'){
        hasil = a - b;
    } else if(aritmatika == '*'){
        hasil = a * b;
    } else if(aritmatika == '/'){
        hasil = a / b;
    } else {
        cout << "sepertinya anda salah memasukan operator";
    }

    cout << a << aritmatika << b << "=" << hasil << endl;

    return 0;
}
