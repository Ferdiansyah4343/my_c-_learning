#include <iostream>

using namespace std;

int main()
{
    // array multidimensi
    // int array[baris][kolom] = {0,1,2,3,4,5}
    int arrayMD[2][2] = {1,2,3,4};
    // bentuknya kayak matrix
    // [1, 2
    //  3, 4]

    // cara aksesnya
    cout << arrayMD[0][0] << " " << arrayMD[0][1] <<  endl;
    cout << arrayMD[1][0] << " " << arrayMD[1][1] <<  endl;

    
    return 0;
}
