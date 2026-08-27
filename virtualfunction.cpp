#include<iostream>
using namespace std;


class Demo{
    public:
        virtual void display() {
            cout << "This is the virtual display function of the Demo class." << endl;
        }

        virtual void show() =0; // Pure virtual function    
};


class Derived : public Demo {
    public:
        void display() override {
            cout << "This is the overridden display function of the Derived class." << endl;
        }

        void show() override {
            cout << "This is the implementation of the pure virtual show function in the Derived class." << endl;
        }
};

int main() {
    Derived d;
    d.display(); // Calls the overridden display function of the Derived class
    d.show();    // Calls the implementation of the pure virtual show function in the Derived class

    return 0;
}