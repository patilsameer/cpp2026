// Demonstration of an abstract class in C++
#include <iostream>
using namespace std;

class Shape {
public:
	virtual double area() const = 0; // Pure virtual function

	void displayArea() const {
		cout << "Area: " << area() << '\n';
	}

	virtual ~Shape() = default;
};

class Circle : public Shape {
private:
	double radius;

public:
	//write your code here
};

class Rectangle : public Shape {
private:
	double length;
	double width;

public:
	//write your code here
};

int main() {
	// Shape shape; // Error: abstract classes cannot be instantiated.
	Circle circle(5.0);
	Rectangle rectangle(4.0, 3.0);

	Shape* shapes[] = {&circle, &rectangle};
	for (const Shape* shape : shapes) {
		shape->displayArea();
	}

	return 0;
}
