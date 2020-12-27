#include <iostream>
using namespace std;

//class declaration 
class Number{
	public:
		int num;
};

//Main function 
int main()
{
	//creating object
	Number N;
	
	//setting value to public data member 
	N.num = 100;
	
	//printing value
	cout<<"value of N.num = "<<N.num<<endl;
	
	return 0;
}
