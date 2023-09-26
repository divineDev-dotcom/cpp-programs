//5) Program to demonstrate the use of conditional statements.
#include<iostream>
using namespace std;
void if_else(); // if and else example
void switch_case(); // switch and case example

int main() {
    if_else();
    switch_case();
}

// if_else function
void if_else() {
    int age = 18;
    cout << "age: " << age;
    if (age < 18) {
        cout << "Sorry, you cannot vote.";
    }
    else if (age >= 18) {
        cout << "Yes! You can vote, go vote then!";
    }
    else {
        cout << "Error, wrong value, are you a ghost?";
    }
}

// end of function.
// switch_case function
void switch_case() {
    int marks = 100;
    switch (marks) {
        case 0:
            cout << "It's 0! You have failed.";
            break;
        case 50:
            cout << "It's 50 marks, not bad.";
            break;
        case 100:
            cout << "Wow! You are a brilliant student, all the best.";
            break;
        default:
            cout << "Error, do you know what's going on here, wrong value.";
    }
}
