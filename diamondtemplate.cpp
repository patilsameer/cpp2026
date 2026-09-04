#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:

    
  //write your code here


    void setPersonDetails(string name, int age)
    {
        //write your code here
    }


    void showDetails()
    {
        cout << "Person Name : " << name << endl;
        cout << "Age         : " << age << endl;
    }


    void displayRole()
    {
        cout << "Role: Person" << endl;
    }
};



class Student : virtual public Person
{
protected:
    int rollNo;
    string course;

public:

   //write your code here


    void setStudentDetails(int rollNo, string course)
    {
        //write your code here
    }


    void study()
    {
        cout << name << " is studying " << course << endl;
    }


    void showDetails()
    {
        cout << "Student Roll No : " << rollNo << endl;
        cout << "Course          : " << course << endl;
    }


    void displayRole()
    {
        cout << "Role: Student" << endl;
    }
};




class Employee : virtual public Person
{
protected:
    int employeeId;
    double salary;

public:

    //write your code here

    void setEmployeeDetails(int employeeId, double salary)
    {
       //write your code here
    }


    void work()
    {
        cout << name << " is working as an employee." << endl;
    }


    void showDetails()
    {
        cout << "Employee ID : " << employeeId << endl;
        cout << "Salary      : " << salary << endl;
    }


    void displayRole()
    {
        cout << "Role: Employee" << endl;
    }
};




class TeachingAssistant : public Student, public Employee
{
private:
    string subject;
    int workingHours;

public:

    // TODO 10:
    // Create default constructor


    // TODO 11:
    // Create parameterized constructor
    //
    // Initialize:
    // Person properties
    // Student properties
    // Employee properties
    // TeachingAssistant properties


    void setTADetails(string subject, int workingHours)
    {
        // TODO 12:
        // Initialize TA properties
    }


    // Unique method of TeachingAssistant
    void conductLab()
    {
        cout << name
             << " is conducting laboratory for "
             << subject << endl;
    }


    void showDetails()
    {
        cout << "Subject       : " << subject << endl;
        cout << "Working Hours : " << workingHours << endl;
    }


    // Same signature as parent classes
    void displayRole()
    {
        cout << "Role: Teaching Assistant" << endl;
    }
};


// ==========================================
// Main Function
// ==========================================

int main()
{
    // TODO 13:
    // Create an object of TeachingAssistant
    //
    // Example:
    //
    // TeachingAssistant ta(...);


    // -------------------------------------
    // Access Person class properties
    // -------------------------------------

    // TODO 14:
    // Call Person's showDetails()


    // -------------------------------------
    // Access Student class properties
    // -------------------------------------

    // TODO 15:
    // Call Student's showDetails()


    // TODO 16:
    // Call Student's unique study() method


    // -------------------------------------
    // Access Employee class properties
    // -------------------------------------

    // TODO 17:
    // Call Employee's showDetails()


    // TODO 18:
    // Call Employee's unique work() method


    // -------------------------------------
    // Access TeachingAssistant properties
    // -------------------------------------

    // TODO 19:
    // Call TeachingAssistant's showDetails()


    // TODO 20:
    // Call conductLab()


    // -------------------------------------
    // Method Ambiguity
    // -------------------------------------

    // Student and Employee both contain
    // displayRole().
    //
    // Call displayRole() separately from:
    //
    // 1. Person
    // 2. Student
    // 3. Employee
    // 4. TeachingAssistant


    // TODO 21:
    // Person's displayRole()


    // TODO 22:
    // Student's displayRole()


    // TODO 23:
    // Employee's displayRole()


    // TODO 24:
    // TeachingAssistant's displayRole()


    return 0;
}
