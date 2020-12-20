/* C++ program to define a class method 
    outside the class definition*/

#include <iostream>
using namespace std;

// class definition
// "Sample" is a class
class Sample {
public: // Access specifier
    // method declarations
    void printText1();
    void printText2();
    void printValue(int value);
};

// Method definitions outside the class
// method definition 1
void Sample::printText1()
{
    cout << "IncludeHelp.com\n";
}

// method definition 2
void Sample::printText2()
{
    cout << "Let's learn together\n";
}

// method definition 3
// it will accept value while calling and print it
void Sample::printValue(int value)
{
    cout << "value is: " << value << "\n";
}

int main()
{
    // creating object
    Sample obj;

    // calling methods
    obj.printText1();
    obj.printText2();
    obj.printValue(101);

    return 0;
}
