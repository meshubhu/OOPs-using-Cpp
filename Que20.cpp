/* create an empty class (a class without data members and member functions) in C++ */

#include <iostream>

using namespace std;

// class definition
class Person {};

// main function
int main() {
  //object creation
  Person per;
  
  // here - we are printing size of the object
  cout << "size of per: " << sizeof(per) << endl;
  
  return 0;
}
