// Demonstration of a copy constructor.
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	std::string name;

	Person(const std::string& personName) : name(personName) {}

	// Copy constructor: creates a new Person from an existing Person.
	Person(const Person& other) : name(other.name) {
		std::cout << "Copy constructor called\n";
	}
};

int main() {
	Person original("Sameer");
	Person copy = original; // Invokes the copy constructor.

	cout << "Original: " << original.name << '\n';
	cout << "Copy: " << copy.name << '\n';

    copy.name = "CSE"; // Modify the copy's name.
    cout << "After modifying the copy:\n";     
    cout << "Original: " << original.name << '\n';
    cout << "Copy: " << copy.name << '\n';
	return 0;
}
