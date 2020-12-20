/* C++ program to assign values to the 
private data members without using constructor */

#include <iostream>
#include <string>
using namespace std;

// class definition
// "student" is a class
class Student {

private: // private access specifier
    int rollNo;
    string stdName;
    float perc;

public: //public access specifier
    //function to set the values
    void setValue()
    {
        rollNo = 0;
        stdName = "None";
        perc = 0.0f;
    }

    //function to print the values
    void printValue()
    {
        cout << "Student's Roll No.: " << rollNo << "\n";
        cout << "Student's Name: " << stdName << "\n";
        cout << "Student's Percentage: " << perc << "\n";
    }
};

int main()
{
    // object creation
    Student std;

    //calling function
    std.setValue();
    std.printValue();

    return 0;
}
