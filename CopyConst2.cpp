#include <iostream>
using namespace std;

class Number {
private:
    int* value;

public:
    explicit Number(int number) : value(new int(number)) {}

    // This copy constructor performs a shallow copy: both objects point to
    // the same dynamically allocated int.
    Number(const Number& other) : value(other.value) {}

    ~Number() {
        delete value;
    }

    void set(int number) { *value = number; }
    void show(const char* name) const {
        cout << name << ": value = " << *value
                  << ", address = " << value << '\n';
    }
};

int main() {
    Number first(10);
    Number second = first; // Calls the copy constructor.

    first.show("first");
    second.show("second"); // Same address: shallow copy.


    cout<<"Setting the first object's value to 20\n";
    first.set(20);
    first.show("first");
    second.show("second"); // Also changes because the pointer is shared.

    // When main ends, both destructors delete the same pointer, causing
    // undefined behavior (typically a double-free).
    return 0;
}