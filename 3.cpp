//3) Program to demonstrate Use of Scope Resolution Operator.
#include <iostream>
using namespace std;
string globalVar = "salman SK";
int main() {
    cout<<"global var: "<<::globalVar;
    return 0;
}