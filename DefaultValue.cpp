#include<iostream>
using namespace std;


class DefaultValue{
    public:
        int value;

        DefaultValue(int value = 0) : value(value) {

        } // Constructor with default parameter



    };



void data(int a = 0, int b = 0, int c = 0) {
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
}

int main(){
    DefaultValue obj1; // Calls constructor with default value
    DefaultValue obj2(10); // Calls constructor with provided value

    cout<<"obj1 value: " << obj1.value << endl; // Output: 0
    cout<<"obj2 value: " << obj2.value << endl; // Output: 10

    data(); // Calls data with default values
    data(5); // Calls data with a = 5, b and c default to 0
    data(5, 10); // Calls data with a = 5, b = 10, c default to 0
    data(5, 10, 15); // Calls data with a = 5, b = 10, c = 15
    data(0, 5, 10); // Calls data with a = 0, b = 5, c = 10
}