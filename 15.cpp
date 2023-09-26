//15) Program to demonstrate unary operator overloading. 
#include <iostream>

using namespace std; // Use the std namespace for simplicity

class MyNumber {
private:
    int value;

public:
    MyNumber(int val) : value(val) {}

    // Overload the unary minus operator (-)
    MyNumber operator-() {
        return MyNumber(-value);
    }

    // Display the value of MyNumber
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    MyNumber num1(5);
    MyNumber num2 = -num1; // Using the overloaded unary minus operator

    cout << "Original Number:" << endl;
    num1.display();

    cout << "After Unary Minus Operator:" << endl;
    num2.display();

    return 0;
}
