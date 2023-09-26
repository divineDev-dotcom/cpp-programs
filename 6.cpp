//6) Program to demonstrate Use of looping statements.
#include<iostream>
using namespace std;

// main function
int main() {
    //for loop
    for (int i = 0; i < 10; i++) {
        cout << i<<endl;
    }

// while loop
int i = 0;
while(i < 10) {
    cout << i <<endl;
    i++;
}

//do-while loop
int j = 0;
do {
    cout << j <<endl;
    j++;
} while(j < 10);
}