#include<iostream>
using namespace std;


class GrandParent {
    public:
        
    void Farmhome() {
        cout << "This is the Farmhome function of the GrandParent class." << endl;
    }
};


class Father : virtual public GrandParent {
    public:
        void home() {
            cout << "This is the home function of the Father class." << endl;
        }
};


class Mother : virtual public GrandParent {
    public:
        void home() {
            cout << "This is the home function of the Mother class." << endl;
        }
};

class Child : public Father, public Mother {
    public:
        void home() {
            cout << "This is the home function of the Child class." << endl;
        }
};

int main() {
    Child child;
    child.home(); // Calls the home function of the Child class

    // Accessing home function from Father and Mother classes
    child.Father::home(); // Calls the home function of the Father class
    child.Mother::home(); // Calls the home function of the Mother class

    // Accessing home function from GrandParent class
    child.Farmhome(); // Calls the home function of the GrandParent class
    //if virtual keyword is not used then it will give error because of ambiguity
    child.Father::Farmhome(); // Calls the Farmhome function of the GrandParent 
    //class through Father
    child.Mother::Farmhome(); // Calls the Farmhome function of the GrandParent 
    //class through Mother
    return 0;
}

