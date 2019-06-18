#include<iostream>
using namespace std;
int calculate(int x, int y, int z)
{
	return(z/(x-y));
}
int main()
{
	int x,y,z;
	cout<<"Enter the values of x , y & z\n";
	cin>>x>>y>>z;
	try
	{
		if(x>y)
		{
			int r=calculate(x,y,z);
			cout<<"\nResult is :"<<r<<endl;
		}
		else if(x<y) throw 1.0;
		else throw (x-y);
	}
	catch(int a)
	{
		cout<<"\nDivision by zero is not possible";
		cout<<"\nProvide x,y such that x!=y";
	}
	catch(...)
	{
		cout<<"The result is negative";
	}
	return 0;
}
