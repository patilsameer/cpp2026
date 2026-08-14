#include<iostream>
using namespace std;

class Student {
    private:
        string name;
        int age;
        
    public:
        Student() {
            name = "";
            age = 0;
        }
        Student(string n, int a) {
            name = n;
            age = a;
        }

        void displayInfo() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
        
};

int main() {
    
    Student arr[5];
    int choice;
    int index = 0;
    string name;
    int age;

    while(1){
        cout<<"Enter your choice: 1. Add Student 2. Display Students 3. Exit"<<endl;
        cin>> choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter Student Name: ";
            cin>> name;
            cout<<"Enter Student Age: ";
            cin>> age;
            arr[index] = Student(name, age);
            index++;
            // Add Student
            break;
        case 2:
                // Display Students
            for(int i = 0; i < index; i++) {
                arr[i].displayInfo();
            }
            break;
        default:
        exit(0);
            break;
        }
    
    }

    
    
    return 0;
}