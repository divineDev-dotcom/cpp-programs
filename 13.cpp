//13) Program to demonstrate the concept of constructor and destructor.
#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    cout << "Creating an object..." << endl;
    MyClass obj; // Constructor called when an object is created

    cout << "Object exists..." << endl;

    // The object goes out of scope and is destroyed here
    cout << "Leaving the program..." << endl;

    return 0;
}
