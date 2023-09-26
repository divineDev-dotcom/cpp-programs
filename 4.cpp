//4) Program to demonstrate Use of arrays.
#include<iostream>
using namespace std;

int main() {
    // Array
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    // Printing the elements of the array
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        cout << numbers[i] << " ";
    }

    cin.get();
    return 0;
}
