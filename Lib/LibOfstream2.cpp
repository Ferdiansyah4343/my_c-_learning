#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream myFile;
    string output, buffer;
    bool isData = false;
    int no;
    string nama;
    myFile.open("data.txt");

    while(!isData){
        getline(myFile, buffer);
        output.append("\n" + buffer);
        if(buffer == "data"){
            isData = true;
        }
    }
    cout << output << endl;


    return 0;
}
