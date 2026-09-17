#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) : value(v) {}

    // Prefix unary operator overloading
    Counter operator++() {
        ++value;
        return *this;
    }

    // Postfix unary operator overloading
    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c1(5);

    ++c1;          // prefix increment
    c1.display();  // Output: Value: 6

    Counter c2 = c1++;
    c1.display();  // Output: Value: 7
    c2.display();  // Output: Value: 6

    return 0;
}
