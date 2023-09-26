//16) Program to demonstrate binary operator overloading. 

#include <iostream>

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    // Constructor to initialize complex numbers
    ComplexNumber(double r, double i) : real(r), imaginary(i) {}

    // Overload the binary addition operator (+) for complex numbers
    ComplexNumber operator+(const ComplexNumber& other) {
        // Perform addition for real and imaginary parts separately
        double sumReal = real + other.real;
        double sumImaginary = imaginary + other.imaginary;

        // Create and return a new ComplexNumber object with the result
        return ComplexNumber(sumReal, sumImaginary);
    }

    // Display the complex number
    void display() {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    // Create two complex numbers
    ComplexNumber num1(2.5, 3.0);
    ComplexNumber num2(1.0, -1.5);

    std::cout << "Complex Number 1: ";
    num1.display();

    std::cout << "Complex Number 2: ";
    num2.display();

    // Use the overloaded + operator to add complex numbers
    ComplexNumber sum = num1 + num2;

    std::cout << "Sum of Complex Numbers: ";
    sum.display();

    return 0;
}
