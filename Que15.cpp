/* C++ program to create an object of a class 
and access class attributes */

#include <iostream>
#include <string>
using namespace std;

// class definition
// "student" is a class
class Student {
public: // Access specifier
    int rollNo; // Attribute (integer variable)
    string stdName; // Attribute (string variable)
    float perc; // Attribute (float variable)
};

int main()
{
    // object creation
    Student std;

    // Accessing attributes and setting the values
    std.rollNo = 101;
    std.stdName = "Shivang Yadav";
    std.perc = 98.20f;

    // Printing the values
    cout << "Student's Roll No.: " << std.rollNo << "\n";
    cout << "Student's Name: " << std.stdName << "\n";
    cout << "Student's Percentage: " << std.perc << "\n";

    return 0;
}
