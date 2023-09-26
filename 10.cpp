//10) Program to demonstrate the concept of default arguments.
#include<iostream>
using namespace std;

// a function with default args
int add(int a = 4, int b = 8) {
 return a+b;   
}

// driver function
int main() {
cout<<"calling with default args "<<add()<<endl;
cout<<"calling with custom args "<<add(4, 2)<<endl;
    return 0;
}