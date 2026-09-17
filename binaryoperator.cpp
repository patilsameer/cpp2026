#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int breadth;

public:
    Box(int l = 0, int b = 0) : length(l), breadth(b) {}

    // Overload + operator
    Box operator+(const Box& other) const {
        return Box(length + other.length, breadth + other.breadth);
    }

    // Overload - operator
    Box operator-(const Box& other) const {
        return Box(length - other.length, breadth - other.breadth);
    }

    void display() const {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }
};

int main() {
    Box b1(10, 20);
    Box b2(5, 8);

    Box sum = b1 + b2;
    Box diff = b1 - b2;

    cout << "Sum:" << endl;
    sum.display();

    cout << "Difference:" << endl;
    diff.display();

    return 0;
}
