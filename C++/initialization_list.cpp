#include<iostream>
using namespace std;
class A
{
	int a;
	char b;
	public:
		A():a(100),b('m')
		{
			cout<<"value of a :"<<a<<endl;
			cout<<"value of b :"<<b<<endl;
		}
};
int main()
{
	A obj;
	return 0;
}
