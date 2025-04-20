
# create the answer to this lab an explain each section and what is being done in simple terms for a new C++ student

Here’s a step-by-step explanation and sample solution for the lab “C++ Programming: Vectors and Sorting.” This guide breaks down each section and explains what is happening in simple terms for a new C++ student.

---

## **Lab Overview**

You are building a C++ program that:

- Reads school supply data from a file (whose name the user provides)
- Stores the data in a class using a vector
- Sorts and displays the list of supplies
- Calculates and shows percentages for different supply types

---

## **1. Program Structure**

You will write:

- A `SchoolSupplies` class (in its own files)
- A `main()` function (in a separate file) that uses the class

---

## **2. The SchoolSupplies Class**

**Purpose:**
To store information about a school, a class, and a list of supplies using a vector.

**Data Members (Variables):**

- `nameSchool` (string): The school’s name
- `nameClass` (string): The class’s name
- `numberPaperTypes` (int): Number of types of paper needed
- `numberWritingInstruments` (int): Number of types of writing instruments needed
- `numberMiscItems` (int): Number of types of miscellaneous items needed
- `listSchoolSupplies` (vector<string>): The actual list of supply items

**Functions:**

- **Constructors:**
    - Default: Sets everything to blank or zero
    - Parameterized: Takes all five data items and sets them using setters
- **Setters/Getters:** For each data member except the vector
- **addSupplyItem(string):** Adds one supply item to the vector
- **sortSupplyList():** Sorts the vector alphabetically
- **countSuppliesListed():** Returns how many items are in the vector
- **calcPaperTypesPercentage():** Calculates what percent of the list are paper types
- **calcWritingInstrumentsPercentage():** Calculates percent for writing instruments
- **calcMiscItemsPercentage():** Calculates percent for misc items
- **displaySupplyList():** Formats and prints all the information

---

## **3. The main() Function**

**What it does:**

1. **Prompt for a file name:**
Asks the user to enter the name of the file to open.
2. **Open the file:**
Tries to open the file. If it fails, shows an error and exits.
3. **Read and validate the first five lines:**
    - Line 1: School name (must not be blank)
    - Line 2: Class name (must not be blank)
    - Line 3: Number of paper types (must be a positive integer)
    - Line 4: Number of writing instruments (must be a positive integer)
    - Line 5: Number of misc items (must be a positive integer)
If any are invalid, show an error and exit.
4. **Create a SchoolSupplies object:**
Pass the five values to the constructor.
5. **Read the rest of the file (supply items):**
    - For each line, if it’s not blank, add it to the object using `addSupplyItem()`.
    - Ignore blank lines.
6. **Sort the supply list:**
Call the `sortSupplyList()` function.
7. **Display the supply list:**
Call the `displaySupplyList()` function to print everything nicely.
8. **Pause so the user can see the output.**

---

## **4. Example Code Outline**

Here’s a simplified version of what your files might look like:

### **SchoolSupplies.h**

```cpp
#include &lt;string&gt;
#include &lt;vector&gt;

class SchoolSupplies {
private:
    std::string nameSchool;
    std::string nameClass;
    int numberPaperTypes;
    int numberWritingInstruments;
    int numberMiscItems;
    std::vector&lt;std::string&gt; listSchoolSupplies;

public:
    SchoolSupplies();
    SchoolSupplies(const std::string&amp;, const std::string&amp;, int, int, int);

    void setNameSchool(const std::string&amp;);
    void setNameClass(const std::string&amp;);
    void setNumberPaperTypes(int);
    void setNumberWritingInstruments(int);
    void setNumberMiscItems(int);

    std::string getNameSchool() const;
    std::string getNameClass() const;
    int getNumberPaperTypes() const;
    int getNumberWritingInstruments() const;
    int getNumberMiscItems() const;

    void addSupplyItem(const std::string&amp;);
    void sortSupplyList();
    int countSuppliesListed() const;

    double calcPaperTypesPercentage() const;
    double calcWritingInstrumentsPercentage() const;
    double calcMiscItemsPercentage() const;

    void displaySupplyList() const;
};
```


### **SchoolSupplies.cpp**

```cpp
#include "SchoolSupplies.h"
#include &lt;iostream&gt;
#include &lt;iomanip&gt;
#include &lt;algorithm&gt;

SchoolSupplies::SchoolSupplies() : nameSchool(""), nameClass(""),
    numberPaperTypes(0), numberWritingInstruments(0), numberMiscItems(0) {}

SchoolSupplies::SchoolSupplies(const std::string&amp; school, const std::string&amp; className,
    int paper, int writing, int misc) {
    setNameSchool(school);
    setNameClass(className);
    setNumberPaperTypes(paper);
    setNumberWritingInstruments(writing);
    setNumberMiscItems(misc);
}

void SchoolSupplies::setNameSchool(const std::string&amp; s) { nameSchool = s; }
void SchoolSupplies::setNameClass(const std::string&amp; c) { nameClass = c; }
void SchoolSupplies::setNumberPaperTypes(int n) { numberPaperTypes = n; }
void SchoolSupplies::setNumberWritingInstruments(int n) { numberWritingInstruments = n; }
void SchoolSupplies::setNumberMiscItems(int n) { numberMiscItems = n; }

std::string SchoolSupplies::getNameSchool() const { return nameSchool; }
std::string SchoolSupplies::getNameClass() const { return nameClass; }
int SchoolSupplies::getNumberPaperTypes() const { return numberPaperTypes; }
int SchoolSupplies::getNumberWritingInstruments() const { return numberWritingInstruments; }
int SchoolSupplies::getNumberMiscItems() const { return numberMiscItems; }

void SchoolSupplies::addSupplyItem(const std::string&amp; item) {
    listSchoolSupplies.push_back(item);
}

void SchoolSupplies::sortSupplyList() {
    std::sort(listSchoolSupplies.begin(), listSchoolSupplies.end());
}

int SchoolSupplies::countSuppliesListed() const {
    return static_cast&lt;int&gt;(listSchoolSupplies.size());
}

double SchoolSupplies::calcPaperTypesPercentage() const {
    if (listSchoolSupplies.empty()) return 0.0;
    return (numberPaperTypes * 1.0) / (listSchoolSupplies.size() * 1.0) * 100.0;
}

double SchoolSupplies::calcWritingInstrumentsPercentage() const {
    if (listSchoolSupplies.empty()) return 0.0;
    return (numberWritingInstruments * 1.0) / (listSchoolSupplies.size() * 1.0) * 100.0;
}

double SchoolSupplies::calcMiscItemsPercentage() const {
    if (listSchoolSupplies.empty()) return 0.0;
    return (numberMiscItems * 1.0) / (listSchoolSupplies.size() * 1.0) * 100.0;
}

void SchoolSupplies::displaySupplyList() const {
    std::cout &lt;&lt; "School: " &lt;&lt; nameSchool &lt;&lt; std::endl;
    std::cout &lt;&lt; "Class: " &lt;&lt; nameClass &lt;&lt; std::endl;
    std::cout &lt;&lt; "Supplies List:" &lt;&lt; std::endl;
    for (const auto&amp; item : listSchoolSupplies)
        std::cout &lt;&lt; "  " &lt;&lt; item &lt;&lt; std::endl;
    std::cout &lt;&lt; std::fixed &lt;&lt; std::setprecision(1);
    std::cout &lt;&lt; "Paper Types: " &lt;&lt; calcPaperTypesPercentage() &lt;&lt; "%" &lt;&lt; std::endl;
    std::cout &lt;&lt; "Writing Instruments: " &lt;&lt; calcWritingInstrumentsPercentage() &lt;&lt; "%" &lt;&lt; std::endl;
    std::cout &lt;&lt; "Misc Items: " &lt;&lt; calcMiscItemsPercentage() &lt;&lt; "%" &lt;&lt; std::endl;
}
```


### **main.cpp**

```cpp
#include &lt;iostream&gt;
#include &lt;fstream&gt;
#include &lt;string&gt;
#include "SchoolSupplies.h"

int main() {
    std::string filename;
    std::cout &lt;&lt; "Enter the name of the file to open: ";
    std::getline(std::cin, filename);

    std::ifstream infile(filename);
    if (!infile) {
        std::cout &lt;&lt; "Error: File could not be opened." &lt;&lt; std::endl;
        system("pause");
        return 1;
    }

    std::string school, className, line;
    int paperTypes, writingInstruments, miscItems;

    // Read and validate school name
    std::getline(infile, school);
    if (school.empty()) {
        std::cout &lt;&lt; "Error: School name cannot be blank." &lt;&lt; std::endl;
        system("pause");
        return 1;
    }

    // Read and validate class name
    std::getline(infile, className);
    if (className.empty()) {
        std::cout &lt;&lt; "Error: Class name cannot be blank." &lt;&lt; std::endl;
        system("pause");
        return 1;
    }

    // Read and validate numbers
    std::getline(infile, line);
    try { paperTypes = std::stoi(line); } catch (...) { paperTypes = 0; }
    if (paperTypes &lt; 1) {
        std::cout &lt;&lt; "Error: Number of paper types must be positive." &lt;&lt; std::endl;
        system("pause");
        return 1;
    }

    std::getline(infile, line);
    try { writingInstruments = std::stoi(line); } catch (...) { writingInstruments = 0; }
    if (writingInstruments &lt; 1) {
        std::cout &lt;&lt; "Error: Number of writing instruments must be positive." &lt;&lt; std::endl;
        system("pause");
        return 1;
    }

    std::getline(infile, line);
    try { miscItems = std::stoi(line); } catch (...) { miscItems = 0; }
    if (miscItems &lt; 1) {
        std::cout &lt;&lt; "Error: Number of misc items must be positive." &lt;&lt; std::endl;
        system("pause");
        return 1;
    }

    SchoolSupplies supplies(school, className, paperTypes, writingInstruments, miscItems);

    // Read supply items
    while (std::getline(infile, line)) {
        if (!line.empty()) {
            supplies.addSupplyItem(line);
        }
    }
    infile.close();

    supplies.sortSupplyList();
    supplies.displaySupplyList();

    system("pause");
    return 0;
}
```

---

## **5. Key Points for New C++ Students**

- **Vectors** let you store a list of items that can grow as you add more.
- **Classes** group related data and functions together.
- **Sorting** is done with `std::sort()` for vectors.
- **File input** uses `ifstream` to read data from a file line by line.
- **Error checking** is important: always check if a file opens and if data is valid.
- **Functions** like `addSupplyItem` keep your code organized and reusable.

---

## **Summary Table: Main Steps**

| Step | What You Do | Why It Matters |
| :-- | :-- | :-- |
| Prompt for file name | Ask user for input | Get the data file to read |
| Open and check file | Try to open, handle errors | Prevents crashes if file is missing |
| Read/validate data | Check for blanks and valid numbers | Ensures your data is usable |
| Create object | Store info in a class | Keeps data organized |
| Read supply items | Add each item to a vector | Handles any number of items |
| Sort and display | Show sorted list with percentages | Looks professional and informative |

---

This outline and explanation should help you understand what each section of the lab is doing and why. The sample code shows how to put it all together in C++[^1].

<div style="text-align: center">⁂</div>

[^1]: https://ppl-ai-file-upload.s3.amazonaws.com/web/direct-files/63266559/3d4abd69-febe-4adc-b51f-7cb28bdf5195/paste.txt

[^2]: https://ppl-ai-file-upload.s3.amazonaws.com/web/direct-files/63266559/49f9eb62-8c9f-41aa-ae4a-1706bbf7d33c/paste-2.txt

