#include<iostream>
using namespace std;


class Student{
    private:
        int rollno;
        int fees;
        public:
       // Student(int rollno):rollno(rollno){}

        Student(int rollno,int fees){
            //rollno = rollno;
            this->rollno = rollno;
            this->fees = fees;
        }

        int getRollno() const {
            return rollno;
        }

        int getFeesInt() const {
            return fees;
        }
        Student& getFees(){
            return *this;
        }

        int getTotal() const {
            return this->fees + this->fees * 0.18; // Assuming 18% tax on fees
        }


        
};

int main(){
    Student s1(101, 1000);
 
    cout<<"s1 rollno: "<<s1.getRollno()<<endl; 
    cout<<"s1  fees without tax: "<<s1.getFeesInt()<<endl; 
    s1.getFees().getTotal();
    cout<<"s1 total fees with tax: "<<s1.getFees().getTotal()<<endl;

    return 0;

}