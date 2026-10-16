#include<iostream>
#include<fstream>
using namespace std;


/*sample data file content
101 Sagar 20
102 Ramesh 25
103 Priya 22
*/
int main()
{
    ifstream inFile("data.txt");
    if (!inFile) {
        cerr << "Unable to open file data.txt";
        exit(1); // terminate with error
    }
    int id;
    string name;
    int age;
    
    while (inFile >> id >> name >> age) {
        cout << "ID: " << id << ", Name: " << name << ", Age: " << age << endl;
    }

    inFile.close();
    return 0;
}