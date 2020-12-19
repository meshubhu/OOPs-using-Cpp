#include <iostream>
using namespace std;

// Program to create functions using inline...
inline double square(int n)
{
	return n*n;
}

inline float average(int n1,int n2)
{
	return ( (float)(n1+n2)/2 );
}

int main()
{
	cout<<"\n SQUARE IS  = "<< square(12);
	cout<<"\n AVERAGE IS = "<< average(10,21)<<"\n";
	return 0;
}
