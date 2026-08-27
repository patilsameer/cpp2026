this is demo git up

class Student{
    public:
        int *rollno;
        // write your code here
};


int main(){
    Student s1(101);
    Student s2 = s1; // Calls the copy constructor

    cout<<"s1 rollno: "<<*s1.rollno<<endl;
    cout<<"s2 rollno: "<<*s2.rollno<<endl;

    Student *s3 = new Student(102);
    Student *s4 = new Student(*s3); // Calls the copy constructor

    // write your code here to change the value of rollno for s1 and s3 and print the 
    // values of rollno for s1, s2, s3 and s4 to show that they are independent copies

    delete s3;
    delete s4;
    return 0;
}


