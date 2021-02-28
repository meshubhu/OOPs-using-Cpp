// Online C++ compiler to run C++ program online
#include <iostream> 
#include <stdlib.h> 
#include <math.h> 

using namespace std;

const int low=15;

int main( ) 
{ 
    int point = 5; 
    int number = 0;
    int random = 0;
    int counter;
    
    cout << "How much do you want randome numbers ?";
    cin >> counter;

    // Seed the random function first
    srand( 0 );

    for( int i=1; i<=counter; i++ ) 
    { 
        random = rand() % 100; // Generate a random number on the range [0,100)
        number = low + random; 

        cout<< number << " " ; 
        point--; 
    } 
}