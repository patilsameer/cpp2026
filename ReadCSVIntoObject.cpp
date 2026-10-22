#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Person{
public:
    int id;
    char name[20];
    int age;

  void setData(int id, string name, int age){
        this->id = id;
        strcpy(this->name, name.c_str());
        this->age = age;
    }

    void displayData(){
        cout << "ID: " << id << ", Name: " << name << ", Age: " << age << endl;
    }
};


int main(){
    ifstream inFile("example.csv");
    ofstream outFile("data.bin", ios::binary);

    if (!inFile) {
        cerr << "Unable to open file data.csv";
        exit(1); // terminate with error
    }

    Person person;
    string line;

    while (getline(inFile, line)) {
        int id;
        string name;
        int age;

        size_t pos1 = line.find(',');
        size_t pos2 = line.find(',', pos1 + 1);

        id = stoi(line.substr(0, pos1));
        name = line.substr(pos1 + 1, pos2 - pos1 - 1);
        age = stoi(line.substr(pos2 + 1));

        

        person.setData(id, name, age);
        outFile.write(reinterpret_cast<char*>(&person), sizeof(Person));
    }

    //or 
    while(inFile>>person.id){
        inFile.ignore(); // Ignore the comma
        inFile.getline(person.name, 20, ','); // Read name until comma
        inFile>>person.age;
        outFile.write(reinterpret_cast<char*>(&person), sizeof(Person));
    }

    inFile.close();
    outFile.close();

    return 0;
}