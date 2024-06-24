#include <iostream>

using namespace std;

int faktorial(int n);

int main(int argc, char const *argv[])
{
    cout << "Nilai dari faktorial 3: " << faktorial(3) << endl;
    return 0;
}

int faktorial(int n){
    if(n <=1){
        cout << n << " adalah: \n";
        return n;
    } else {
        cout << n << "*";
        return n * faktorial(n-1);
    }
}