/* to print reverse triangle bridge pattern in C++ using nesting of loops */

#include<iostream>
using namespace std;

int main()
{  
	int i,j,n;
	cout<<"Enter Largest Alphabet Value(e.g C=3):";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=65;j<64+(2*n);j++)
		{ 
			if(j>=(64+n)+i)
				cout<<(char)((64+n)-(j%(64+n)));
			else if(j<=(64+n)-i)
				cout<<(char)j;
			else
				cout<<" ";
		}
		cout<<endl;
	}

	return 0;
}
