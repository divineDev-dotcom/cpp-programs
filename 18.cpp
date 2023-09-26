//18) Program to demonstrate concept of virtual base class.
#include <iostream>
using namespace std;

// Define a virtual base class
class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks!" << endl;
    }
};

// Define two base classes inheriting virtually from Animal
class Mammal : virtual public Animal {
public:
    void walk() {
        cout << "Mammal walks on four legs." << endl;
    }
};

class Bird : virtual public Animal {
public:
    void fly() {
        cout << "Bird flies with wings." << endl;
    }
};

// Define a derived class that inherits from both Mammal and Bird
class Bat : public Mammal, public Bird {
public:
    void sleep() {
        cout << "Bat sleeps hanging upside down." << endl;
    }
};

int main() {
    // Create an object of the derived class Bat
    Bat bat;

    // Call functions from different base classes and the derived class
    bat.speak(); // Resolves the ambiguity using the virtual base class
    bat.walk();
    bat.fly();
    bat.sleep();

    return 0;
}
