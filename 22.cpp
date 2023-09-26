//Demonstrating Encapsulation (Superhero's Secret Identity)
#include <iostream>
#include <string>
using namespace std;

// Superhero class demonstrating encapsulation
class Superhero {
private:
    string superheroName;
    string realName;

public:
    Superhero(string superhero, string real)
        : superheroName(superhero), realName(real) {}

    // Function to reveal the secret identity
    void revealIdentity() {
        cout << "My secret identity is " << realName << "!" << endl;
    }

    // Function to show off the superhero's power
    void showOffPower() {
        cout << superheroName << " shows off their superhero power!" << endl;
    }
};

int main() {
    Superhero ironMan("Iron Man", "Tony Stark");
    ironMan.showOffPower();
    ironMan.revealIdentity();

    return 0;
}
