#include<iostream>
using namespace std;

class Student{
    private:
        int rollno;
        public:
       // Student(int rollno):rollno(rollno){}

        Student(int rollno){
            //rollno = rollno;
            this->rollno = rollno;
        }

        int getRollno() const {
            return rollno;
        }
};


int main(){
    Student s1(101);
 
    cout<<"s1 rollno: "<<s1.getRollno()<<endl; //
    return 0;
}