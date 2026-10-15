#include<iostream>
#include<fstream>
using namespace std;


int main(){

    fstream file("example.txt");
    char buffer[200];

    while(!file.eof()){
        file.read(buffer, 200);
        cout<<buffer;
       
    }

    file.close();

}