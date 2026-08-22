/* this code demonstrate the copy constructor 
    data member is pointer and we are using deep copy in copy constructor
    delete is used in destructor to free the memory allocated for the pointer
    delete in main is used to free the memory allocated for the objects 
    created using new operator
    if any of the delete is not used then it will cause memory leak and undefined behavior
    */
#include<iostream>
using namespace std;

class Student{

    public:
        int *rollno;
        Student(int r):rollno(new int(r)){
            cout<<"Parameterized constructor called for rollno: "<<rollno<<endl;
        }

        Student(const Student& s):rollno(new int(*s.rollno)){
            cout<<"Copy constructor called for rollno: "<<rollno<<endl;
        }

        ~Student(){
            cout<<"Destructor called for rollno: "<<rollno<<endl;
            delete rollno;
        }
    };

int main(){
    Student s1(101);
    Student s2 = s1; // Calls the copy constructor

    cout<<"s1 rollno: "<<*s1.rollno<<endl;
    cout<<"s2 rollno: "<<*s2.rollno<<endl;

    Student *s3 = new Student(102);
    Student *s4 = new Student(*s3); // Calls the copy constructor
 
    delete s3;
    delete s4;
    return 0;
}