//Demonstrating Abstraction (Remote Control)
#include <iostream>
#include <string>
using namespace std;

// Abstract Television class demonstrating abstraction
class Television {
public:
    virtual void turnOn() = 0;
    virtual void changeChannel(int channel) = 0;
    virtual void adjustVolume(int volume) = 0;
};

// Concrete Television class
class SmartTV : public Television {
public:
    void turnOn() override {
        cout << "Smart TV is powered on!" << endl;
    }

    void changeChannel(int channel) override {
        cout << "Channel changed to " << channel << endl;
    }

    void adjustVolume(int volume) override {
        cout << "Volume adjusted to " << volume << endl;
    }
};

int main() {
    SmartTV myTV;
    myTV.turnOn();
    myTV.changeChannel(5);
    myTV.adjustVolume(30);

    return 0;
}
