#include <iostream>
using namespace std;

//structure definition with private and public memebers
struct Student
{
    private:
        int rNo;
        float perc;
    public:
        //function to read details
        void read(void)
        {
            cout<<"Enter roll number: ";
            cin>>rNo;
            cout<<"Enter percentage: ";
            cin>>perc;
        }
        //function to print details
        void print(void)
        {
            cout<<endl;
            cout<<"Roll number: "<<rNo<<endl;
            cout<<"Pecentage: "<<perc<<"%"<<endl;
        }
};

//Main code
int main()
{
    //declaring structure variable
    struct Student std;
    //reading and printing student details
    //by calling public member functions of the structure
    std.read();
    std.print();
    
    return 0;
}
