#include<iostream>
using namespace std;


class DefaultValue{
    public:
        int value;

        DefaultValue(int value = 0) : value(value) {

        } // Constructor with default parameter

    };



int main(){
    DefaultValue obj1; // Calls constructor with default value
    DefaultValue obj2(10); // Calls constructor with provided value

    cout<<"obj1 value: " << obj1.value << endl; // Output: 0
    cout<<"obj2 value: " << obj2.value << endl; // Output:
}