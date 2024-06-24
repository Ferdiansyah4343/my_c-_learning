#include <iostream>

using namespace std;

union datas{
    int a;
    char b[4];
};

int main() {
    datas data_union;
    data_union.a = 1246761;
    cout << data_union.a << endl;  // Output: 1246761
    cout << data_union.b << endl;

    data_union.b[0] = 'a';
    data_union.b[1] = 'b';
    data_union.b[2] = 'c';
    data_union.b[3] = 'd';

    cout << data_union.a << endl;  // datanya berubah jadi 1684234849
    cout << data_union.b << endl;  // Output: abcd

    return 0;
}