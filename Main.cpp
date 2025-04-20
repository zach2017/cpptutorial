// main.cpp
// This file contains the main program that uses the Person class

// Include necessary libraries
#include <iostream>  // For console I/O
#include <vector>    // For storing multiple Person objects
#include <fstream>   // For file operations
#include <limits>    // For numeric_limits

// Include our Person class header
#include "Person.h"

int main() {
    // Variable to store user's menu choice
    int choice;

    // Vector to store Person objects
    std::vector<Person> people;

    // Display menu
    std::cout << "=== Person Database System ===" << std::endl;
    std::cout << "1. Add new people" << std::endl;
    std::cout << "2. Load people from file" << std::endl;
    std::cout << "Enter your choice (1 or 2): ";

    // Read user's choice
    std::cin >> choice;

    // Clear input buffer after reading number
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (choice == 1) {
        // Option 1: Add new people
        int numPeople;

        // Ask how many people to add
        std::cout << "How many people do you want to enter? ";
        std::cin >> numPeople;

        // Clear input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        // Loop to read data for each person
        for (int i = 0; i < numPeople; i++) {
            std::cout << "\nEnter details for person #" << (i + 1) << std::endl;

            // Create new Person object
            Person person;

            // Call readData to get user input
            person.readData();

            // Add person to the vector
            people.push_back(person);
        }

        // Open output file for writing
        std::ofstream outFile("people.txt");

        // Check if file opened successfully
        if (outFile.is_open()) {
            // Loop through all Person objects
            for (const auto& person : people) {
                // Write each person to the file
                person.saveToFile(outFile);
            }

            // Close the file
            outFile.close();

            // Confirm success
            std::cout << "\nData saved to people.txt successfully!" << std::endl;
        }
        else {
            // Report error if file couldn't be opened
            std::cout << "\nError: Could not open file for writing!" << std::endl;
        }
    }
    else if (choice == 2) {
        // Option 2: Load people from file

        // Open input file for reading
        std::ifstream inFile("people.txt");

        // Check if file opened successfully
        if (inFile.is_open()) {
            Person person;

            // Read Person objects until end of file
            while (person.loadFromFile(inFile)) {
                // Add each successfully read Person to the vector
                people.push_back(person);
            }

            // Close the file
            inFile.close();

            // Check if any people were loaded
            if (people.empty()) {
                std::cout << "\nNo data found in the file!" << std::endl;
            }
            else {
                std::cout << "\nLoaded " << people.size() << " people from file." << std::endl;
            }
        }
        else {
            // Report error if file couldn't be opened
            std::cout << "\nError: Could not open file for reading!" << std::endl;
        }
    }

    // Display all people if any exist
    if (!people.empty()) {
        std::cout << "\n=== People Information ===" << std::endl;

        // Loop through and display each person
        for (int i = 0; i < people.size(); i++) {
            std::cout << "\nPerson #" << (i + 1) << std::endl;
            people[i].displayData();
            std::cout << "------------------------" << std::endl;
        }
    }

    return 0;  // Indicate successful program completion
}