#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    string line;
    ifstream myfile("example.txt");
   
    
        while (getline(myfile, line))
        {
            cout << line << '\n';
        }
        myfile.close();
  
}