// Person.cpp
// This file contains the implementation of the Person class methods

#include "Person.h"  // Include our header file

// Implementation of readData method
void Person::readData() {
    // Prompt and read name
    std::cout << "Enter name: ";
    std::getline(std::cin, name);  // getline reads entire line with spaces

    // Prompt and read age
    std::cout << "Enter age: ";
    std::cin >> age;  // Use extraction operator to read integer

    // Clear input buffer to prevent issues with next getline
    // This discards any remaining characters (like newline) after reading age
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Prompt and read address
    std::cout << "Enter address: ";
    std::getline(std::cin, address);  // Read full address including spaces
}

// Implementation of displayData method
void Person::displayData() const {
    // Display all person data
    std::cout << "Name: " << name << std::endl;     // Print name and newline
    std::cout << "Age: " << age << std::endl;       // Print age and newline
    std::cout << "Address: " << address << std::endl; // Print address and newline
}

// Implementation of saveToFile method
void Person::saveToFile(std::ofstream& file) const {
    // Write each field followed by a newline
    file << name << "\n";    // Write name
    file << age << "\n";     // Write age
    file << address << "\n"; // Write address
}

// Implementation of loadFromFile method
bool Person::loadFromFile(std::ifstream& file) {
    // Try to read each field; if any read fails, return false
    if (
        std::getline(file, name) &&  // Read name line
        file >> age &&              // Read age
        file.ignore() &&            // Ignore newline after age
        std::getline(file, address)  // Read address line
        ) {
        return true;  // All reads succeeded
    }
    return false;     // At least one read failed
}