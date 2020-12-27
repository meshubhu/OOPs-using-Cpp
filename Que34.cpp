#include <iostream>
using namespace std;

class Numbers
{
    private:
        int a;
        int b;
    public:
        Numbers() {a = 0; b = 0;}
        
        //setter functions to set a and b
        void set_a(int num1)
        {
            a = num1;
        }
        void set_b(int num2)
        {
            b = num2;
        }
        
        //getter functions to get value of a and b
        int get_a(void) const
        {
            return a;
        }
        int get_b(void) const
        {
            return b;
        }
};

//Main function
int main()
{
    //declaring object to the class
    Numbers Num;
    //set values
    Num.set_a(100);
    Num.set_b(100);
    
    //printing values
    cout<<"Value of a: "<<Num.get_a()<<endl;
    cout<<"Value of b: "<<Num.get_b()<<endl;
    
    return 0;
}
