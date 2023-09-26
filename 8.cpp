//8) Program to demonstrate Use of call by reference.
#include<iostream>
using namespace std;
void displayValue(int &x) {
cout<<"the value is "<<x;
}

// main function
int main() {
int a = 50;
displayValue(a);
    return 0;
}