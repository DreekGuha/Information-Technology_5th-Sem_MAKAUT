#include <iostream>
using namespace std;
class M
{
public:
	void display()
	{
		for(int i=1;i<=50;i++)
		{
			if(i%2==0)
				cout<<i<<" ";
		}
	}
};
class N
{
public:
	void display()
	{
		for(int i=1;i<=50;i++)
		{
			if(i%2!=0)
				cout<<i<<" ";
		}
	}
};
class P:public M,public N
{
public:
	void display()
	{
		int j;
		for(int i=3;i<=99;i++)
		{
			for(j=2;j<i;j++)
			{
			if(i%j==0)
				break;
			}
			if(i==j)
			{
				cout<<j<<" ";
			}
		}
	}
};
int main()
{
	P obj;
	cout<<"\nEven numbers between 1 and 50 are:"<<endl;
	obj.M::display();

	cout<<"\nOdd numbers between 1 and 50 are:"<<endl;
	obj.N::display();

	cout<<"\nPrime numbers between 3 and 99 are:"<<endl;
	obj.display();
	return 0;
}
