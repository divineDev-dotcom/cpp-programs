//17) Programs to demonstrate different types of inheritance. 
#include <iostream>
using namespace std;

// Base class for animals
class Animal {
public:
    // Animals love to eat!
    void eat() {
        cout << "Animal is enjoying a meal." << endl;
    }

    // Even animals need their beauty sleep!
    void sleep() {
        cout << "Animal is taking a cozy nap." << endl;
    }
};

// Single Inheritance
class Dog : public Animal {
public:
    // Dogs bark to communicate with their hoomans!
    void bark() {
        cout << "Dog is barking enthusiastically." << endl;
    }
};

// Multiple Inheritance: Bats are both animals and can fly like birds
class Bat : public Animal {
public:
    // Bats have a superpower - they can fly!
    void fly() {
        cout << "Bat is soaring through the night sky." << endl;
    }

    // They also use echolocation to navigate in the dark!
    void echolocation() {
        cout << "Bat is using echolocation to find its way." << endl;
    }
};

// Hierarchical Inheritance
class Cat : public Animal {
public:
    // Cats purr when they're content
    void purr() {
        cout << "Cat is purring with satisfaction." << endl;
    }
};

// Multilevel Inheritance: Kittens are adorable baby cats
class Kitten : public Cat {
public:
    // Kittens are irresistibly cute!
    void beCute() {
        cout << "Kitten is being incredibly cute and melting hearts." << endl;
    }
};

//main function
int main() {
    cout << "Demonstrating Single Inheritance:" << endl;
    Dog myDog;
    myDog.eat();
    myDog.sleep();
    myDog.bark();

    cout << "\nDemonstrating Multiple Inheritance:" << endl;
    Bat myBat;
    myBat.eat();
    myBat.sleep();
    myBat.fly();
    myBat.echolocation();

    cout << "\nDemonstrating Hierarchical Inheritance:" << endl;
    Cat myCat;
    myCat.eat();
    myCat.sleep();
    myCat.purr();

    cout << "\nDemonstrating Multilevel Inheritance:" << endl;
    Kitten myKitten;
    myKitten.eat();
    myKitten.sleep();
    myKitten.purr();
    myKitten.beCute();

    return 0;
}
