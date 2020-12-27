#include <iostream>
using namespace std;

class ExampleThis
{
	public:
		ExampleThis* address(void){
			return this;
		}
};

//Main functionn
int main ()
{
	//creating objects
	ExampleThis Ex1, Ex2, Ex3;

	//printing the object's address 
	cout<<"Address of object Ex1: "<<Ex1.address ()<<endl;
	cout<<"Address of object Ex2: "<<Ex2.address ()<<endl;
	cout<<"Address of object Ex3: "<<Ex3.address ()<<endl;

	return 0;
}
