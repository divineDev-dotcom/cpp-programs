//Concept of Polymorphism
#include <iostream>
#include <string>
using namespace std;

// Base class for superheroes
class Superhero {
protected:
    string name;

public:
    Superhero(string n) : name(n) {}

    void showOffPower() {
        cout << name << " shows off their superhero power!" << endl;
    }

    // A virtual function for the superhero's special move
    virtual void specialMove() {
        cout << name << " performs a heroic special move!" << endl;
    }
};

// Derived class for Iron Man (Tony Stark)
class IronMan : public Superhero {
public:
    IronMan() : Superhero("Iron Man (Tony Stark)") {}

    // Override the specialMove function for Iron Man
    void specialMove() override {
        cout << "Iron Man unleashes the full power of the Iron Man suit!" << endl;
    }
};

// Derived class for Captain America (Steve Rogers)
class CaptainAmerica : public Superhero {
public:
    CaptainAmerica() : Superhero("Captain America (Steve Rogers)") {}

    // Override the specialMove function for Captain America
    void specialMove() override {
        cout << "Captain America defends justice with his unbreakable shield!" << endl;
    }
};

// Derived class for Thor
class Thor : public Superhero {
public:
    Thor() : Superhero("Thor") {}

    // Override the specialMove function for Thor
    void specialMove() override {
        cout << "Thor brings the thunder and lightning with the mighty Mjolnir!" << endl;
    }
};

// Derived class for Hulk (Bruce Banner)
class Hulk : public Superhero {
public:
    Hulk() : Superhero("Hulk (Bruce Banner)") {}

    // Override the specialMove function for Hulk
    void specialMove() override {
        cout << "Hulk's incredible rage leads to a devastating smash!" << endl;
    }
};

// Derived class for Doctor Strange (Stephen Strange)
class DoctorStrange : public Superhero {
public:
    DoctorStrange() : Superhero("Doctor Strange (Stephen Strange)") {}

    // Override the specialMove function for Doctor Strange
    void specialMove() override {
        cout << "Doctor Strange manipulates the mystic arts to alter reality!" << endl;
    }
};

int main() {
    cout << "Welcome to the Marvel Superhero Showdown!" << endl;

    // Create superhero objects
    Superhero* heroes[5];
    heroes[0] = new IronMan();
    heroes[1] = new CaptainAmerica();
    heroes[2] = new Thor();
    heroes[3] = new Hulk();
    heroes[4] = new DoctorStrange();

    // Superheroes show off their powers and perform special moves
    cout << "\nSuperheroes in Action:" << endl;
    for (int i = 0; i < 5; i++) {
        heroes[i]->showOffPower();
        heroes[i]->specialMove();
        cout << endl;
    }

    // Release dynamically allocated memory
    for (int i = 0; i < 5; i++) {
        delete heroes[i];
    }

    return 0;
}
