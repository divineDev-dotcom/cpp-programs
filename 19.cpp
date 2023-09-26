//19) Program to demonstrate different formatted and unformatted I/O operations. 
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

int main() {
    // Formatted Input and Output
    cout << "Formatted I/O Operations:" << endl;

    // Formatted output with setw and setprecision
    double num = 3.141592653589793;
    cout << "Formatted Output: " << setw(10) << setprecision(4) << num << endl;

    // Reading formatted input
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You entered: " << age << " years old." << endl;

    // Unformatted Input and Output
    cout << "\nUnformatted I/O Operations:" << endl;

    // Unformatted output with put and write
    char str[] = "Hello, World!";
    cout.put('U').put('n').put('f').put('o').put('r').put('m').put('a').put('t').put('t').put('e').put('d').put(':');
    cout.write(str, sizeof(str)).put('\n');

    // Unformatted input with getline
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);
    cout << "You entered: " << input << endl;

    return 0;
}
