#include <iostream>
using namespace std;

//A user defined function
void testFunction(void)
{
    //declaring a local class
    //which is accessible within this function only
    class Test1
    {
        private:
            int num;
        public:
            void setValue(int n)
            {
                num = n;
            }
            int getValue(void)
            {
                return num;
            }
    };
    
    //any message of the function
    cout<<"Inside testFunction..."<<endl;
    
    //creating class's object
    Test1 T1;
    T1.setValue(100);
    cout<<"Value of Test1's num: "<<T1.getValue()<<endl;
}

//Main function
int main()
{
    //declaring a local class
    //which is accessible within this function only
    class Test2
    {
        private:
            int num;
        public:
            void setValue(int n)
            {
                num = n;
            }
            int getValue(void)
            {
                return num;
            }
    };
    
    
    //calling testFunction
    cout<<"Calling testFunction..."<<endl;
    testFunction();
    
    //any message of the function
    cout<<"Inside main()..."<<endl;
    
    //creating class's object
    Test2 T2;
    T2.setValue(200);
    cout<<"Value of Test2's num: "<<T2.getValue()<<endl;
    
    return 0;
}

