#include <iostream> //cube using macro substitution
using namespace std;
#define cube(a) (a*a*a)
int main()
{
	long x=5;
	long y=cube(x);
	cout<<"y "<<y<<endl;
	int a=5,b=7;
	int c=cube((a+b));
	cout<<"C "<<c<<endl;
	return 0;
}
