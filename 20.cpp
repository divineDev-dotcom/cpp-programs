//20) Program to demonstrate reading from and writing in to the files. 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Structure to represent an animal
struct Animal {
    string name;
    string species;
    int age;
};

// Function to save animal data to a file
void saveZooToFile(const string& filename, const Animal& animal) {
    ofstream outFile(filename, ios::app); // Open the file in append mode
    if (outFile.is_open()) {
        outFile << "Name: " << animal.name << endl;
        outFile << "Species: " << animal.species << endl;
        outFile << "Age: " << animal.age << " years old" << endl;
        outFile << "--------------------------" << endl;
        outFile.close();
        cout << "Saved " << animal.name << " to the zoo file." << endl;
    } else {
        cout << "Unable to open the zoo file for writing." << endl;
    }
}

// Function to read and display animal data from a file
void readZooFromFile(const string& filename) {
    ifstream inFile(filename);
    if (inFile.is_open()) {
        string line;
        cout << "Zoo Animals:" << endl;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open the zoo file for reading." << endl;
    }
}

int main() {
    cout << "Welcome to the Zoo!" << endl;

    // Create some animals
    Animal lion = { "Simba", "Lion", 5 };
    Animal elephant = { "Dumbo", "Elephant", 10 };
    Animal penguin = { "Pengy", "Penguin", 3 };

    // Save animals to the zoo file
    saveZooToFile("zoo.txt", lion);
    saveZooToFile("zoo.txt", elephant);
    saveZooToFile("zoo.txt", penguin);

    // Read and display animals from the zoo file
    cout << "\nZoo Animals from File:" << endl;
    readZooFromFile("zoo.txt");

    return 0;
}
