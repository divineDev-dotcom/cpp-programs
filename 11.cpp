//11) Program to demonstrate the concept of Function Overloading
// lets use oop here, i like it!
#include<iostream>
using namespace std;

class a {
public:
    int add(int a, int b) {
        return a + b;
    }
};

class b : public a {
public:
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    a A;
    b B;
    cout << "the result is " << A.add(1, 6) << endl;  // Calls the add(int, int) method from class a
    cout << "the result of overloaded function is " << B.add(4, 6, 3) << endl;  
    // Calls the add(int, int, int) method from class b
    return 0;
}
