#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    cout << "Masukan panjang pola: ";
    cin >> n;
    cout << "Pola 1\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Pola 2\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Pola 3\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n; k >= i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "Pola 4\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
