#include <iostream>
using namespace std;
class Number {
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    bool operator==(const Number& other) const {
        return value == other.value;
    }

    bool operator!=(const Number& other) const {
        return !(*this == other);
    }

    bool operator<(const Number& other) const {
        return value < other.value;
    }

    bool operator>(const Number& other) const {
        return value > other.value;
    }

    bool operator<=(const Number& other) const {
        return value <= other.value;
    }

    bool operator>=(const Number& other) const {
        return value >= other.value;
    }

    friend ostream& operator<<(std::ostream& os, const Number& n);
};

ostream& operator<<(std::ostream& os, const Number& n){
        os << n.value;
        return os;
    }

int main() {
    Number a(10);
    Number b(20);
    Number c(10);

    cout << std::boolalpha;
    cout << "a == c: " << (a == c) << '\n';
    cout << "a != b: " << (a != b) << '\n';
    cout << "a < b: " << (a < b) << '\n';
    cout << "b > a: " << (b > a) << '\n';
    cout << "a <= c: " << (a <= c) << '\n';
    cout << "b >= a: " << (b >= a) << '\n';

    cout << "a = " << a << ", b = " << b << ", c = " << c << '\n';

    return 0;
}
