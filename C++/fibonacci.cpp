#include<iostream>
using namespace std;
int fib(int);
int main()
{
	int n,i;
	cout<<"Enter the total number...";
	cin>>n;
	cout<<"Fibonacci series is: ";
	for(i=1;i<=n;i++)
	{
		cout<<fib(i)<<" ";
	}
	cout<<endl;
	return 0;
}
int fib(int n)
{
	if(n==1||n==2)
		return (1);
	else
		return(fib(n-1)+fib(n-2));
}
