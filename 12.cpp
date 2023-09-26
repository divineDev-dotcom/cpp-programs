//12) Program to demonstrate the concept of static members.
//here comes oop again
#include <iostream>
using namespace std;
//my class, not sy bca
class MyClass {
public:
    // Static member variable
    static int count;

    // Constructor
    MyClass() {
        count++;
    }

    // Static member function
    static int getCount() {
        return count;
    }
};

// Initialize the static member variable
int MyClass::count = 0;

int main() {
    // Create objects of MyClass
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    // Access and print the count using the static member function
    cout << "Count: " << MyClass::getCount() << endl;

    return 0;
}
