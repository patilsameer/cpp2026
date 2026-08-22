
#include <iostream>

class Sample {
public:
	int value;

	Sample(int value) : value(value) {
		std::cout << "Parameterized constructor\n";
	}

	Sample(const Sample& other) : value(other.value) {
		std::cout << "Copy constructor\n";
	}
};

int main() {
	Sample* original = new Sample(42);
	Sample* copy = new Sample(*original); // Invokes the copy constructor.

	std::cout << "Original value: " << original->value << '\n';
	std::cout << "Copied value: " << copy->value << '\n';

copy->value = 100; // Modify the copied object's value.
    std::cout << "After modifying the copied object:\n";    
    std::cout << "Original value: " << original->value << '\n';
    std::cout << "Copied value: " << copy->value << '\n';

	delete original;
	delete copy;
	return 0;
}
