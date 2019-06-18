#include<iostream>//example of function overloading
using namespace std;
void test(int x,int y);
void test(char ch);
int main()
{
	int m1=10,m2=7;
	char ch='*';
	test(m1,m2);
	test(ch);
	return 0;
}
void test(int x,int y)
{
	cout<<"The summation of "<<x<<" & "<<y<<" is "<<(x+y)<<endl;
}
void test(char ch)
{
	for(int i=0;i<=5;i++)
	{
		cout<<ch;
	}
}
