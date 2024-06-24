#include <iostream>
#include <cstdlib> // mengandung funsi random

using namespace std;

int main(int argc, char const *argv[])
{
    char lanjut;
    while (true)
    {
        cout << "Lempar dadu? (y/n)";
        cin >> lanjut;
        if (lanjut == 'y')
        {
            cout << 1 + (rand() % 6) << endl;
        } else if(lanjut == 'n'){
            break;
        } else {
            cout << "Warning: ketika y atau n\n\n";
        }
    }
    return 0;
}
