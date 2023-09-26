//7) Program to demonstrate Use of call by value.
#include<iostream>
using namespace std;

int add(int a, int b) {
    return a+b;
}

// main function
int main() {
int x = 1, y = 2;
//calling by value
cout<<"the result is"<<add(x, y)<<endl;
    return 0;
}