#include<iostream>
#include<cmath>
using namespace std;
template<class T>
void root(T a,T b, T c)
{
	T d=b*b-4*a*c;
	if(d==0)
	{
		cout<<"R1=R2="<<-b/(2*a)<<endl;
	}
	else if(d>0)
	{
		cout<<"Roots are real\n";
		double r=sqrt(d);
		double r1=(-b+r)/(2*a);
		double r2=(-b-r)/(2*a);
		cout<<"R1="<<r1<<endl;
		cout<<"R2="<<r2<<endl;
	}
	else
	{
		cout<<"Roots are complex"<<endl;
		double r1=-b/(2*a);
		double r2=sqrt(-d)/(2*a);
		cout<<"Real part ="<<r1<<endl;
		cout<<"Imagenary part="<<r2<<endl;
	}
}
int main()
{
	cout<<"Integer coefficients\n";
	root(1,-5,6);
	cout<<"Double coefficients\n";
	root(1.5,3.6,4.0);
	return 0;
}

