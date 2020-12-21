/*  C++ program to create a class with setter and getter */

#include <iostream>

using namespace std;

// class definition
class Pofloat {
  private: // private data members
    float x, y;

  public: // public member functions
    void set_xy(float x, float y);
  float get_x();
  float get_y();
};

// member functions definitions
void Pofloat::set_xy(float x, float y) {
  this -> x = x;
  this -> y = y;
}

float Pofloat::get_x() {
  return x;
}

float Pofloat::get_y() {
  return y;
}

// main function
int main() {
  // creating objects
  Pofloat objP;

  //setting the values
  objP.set_xy(36.0f, 24.0f);
  //getting the values
  cout << "objP is " << objP.get_x();
  cout << ", " << objP.get_y() << endl;

  //setting the values again
  objP.set_xy(1.2f, 3.4f);
  //getting the values again
  cout << "objP is " << objP.get_x();
  cout << ", " << objP.get_y() << endl;

  return 0;
}
