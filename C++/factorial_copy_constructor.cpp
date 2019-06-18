#include <iostream> // copy comstructor
#include<string>
using namespace std;
class copy
{
	int n,i,fact;
	public:
		copy(int x)
		{
			n=x;
			fact=1;
		}
		copy(copy &x)
		{
			x=x.n;
			fact=1;
		}
		void calculate()
		{
			for(i=1;i<=n;i++)
			{
				fact=fact*i;
			}
		}
		void display()
		{
			cout<<"\nFactorial.."<<fact<<endl;
		}

};
int main()
{
	int x;
	cout<<"\nEnter value..";
	cin>>x;
	copy c1(x);
	copy c2(c1);
	c2.calculate();
	c2.display();
	return 0;
}

