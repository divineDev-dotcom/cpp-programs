//14) Program to demonstrate the concept of friend function.
#include <iostream>

// Forward declaration of the class
class MyClass;

// Declaration of the friend function
void displayPrivateData(const MyClass& obj);

// Class definition
class MyClass {
private:
    int privateData;

public:
    MyClass(int data) : privateData(data) {}

    // Declare the friend function as a friend of this class
    friend void displayPrivateData(const MyClass& obj);
};

// Definition of the friend function
void displayPrivateData(const MyClass& obj) {
    // Since it's a friend function, it can access private members of MyClass
    std::cout << "Friend Function: The privateData is " << obj.privateData << std::endl;
}

int main() {
    // Create an object of MyClass
    MyClass myObject(42);

    // Call the friend function to display private data
    displayPrivateData(myObject);

    return 0;
}
