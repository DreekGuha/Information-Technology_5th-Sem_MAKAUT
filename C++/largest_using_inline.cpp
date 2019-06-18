#include <iostream> // largest among three number using inline function
using namespace std;
inline long large(int a,int b,int c)
{
	if(a>b && a>c)
		return a;
	else if(b>c)
		return b;
	else
		return c;
}
int main()
{
	int a,b,c;
	cout<<"Enter 1st number"<<endl;
	cin>>a;
	cout<<"Enter 2nd number"<<endl;
	cin>>b;
	cout<<"Enter 3rd number"<<endl;
	cin>>c;
	int d=large(a,b,c);
	cout<<"largest among three number is "<<d<<endl;
	return 0;
}

