// Person.h
// This header file contains the declaration of the Person class

#ifndef PERSON_H   // Include guard to prevent multiple inclusions
#define PERSON_H   // Define the guard

// Include necessary libraries
#include <string>  // For std::string
#include <iostream>  // For input/output operations
#include <fstream>   // For file operations
#include <limits>    // For numeric_limits

// Person class declaration
class Person {
private:
    // Private member variables to store person data
    std::string name;    // Stores the person's name
    int age;             // Stores the person's age
    std::string address; // Stores the person's address

public:
    // Default constructor - initializes all members to default values
    // The initializer list (after the colon) sets initial values
    Person() : name(""), age(0), address("") {}

    // Parameterized constructor - creates a Person with provided values
    // const std::string& n - uses reference to avoid copying the string
    Person(const std::string& n, int a, const std::string& addr)
        : name(n), age(a), address(addr) {
    }

    // Method to get input from user via console
    void readData();

    // Method to display the data - const means it won't modify the object
    void displayData() const;

    // Save person data to an output file stream
    // const indicates this method won't modify the object
    void saveToFile(std::ofstream& file) const;

    // Load person data from an input file stream
    // Returns true if successful, false otherwise
    bool loadFromFile(std::ifstream& file);
};

#endif // PERSON_H#pragma once
