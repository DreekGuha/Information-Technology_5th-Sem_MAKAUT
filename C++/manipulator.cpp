#include<iostream> 
using namespace std;
int main()
{
	float a=10.056f;
	cout<<a<<endl;

	cout.setf(ios::scientific);
	cout<<a<<endl;

	cout.setf(ios::fixed);
	cout.setf(ios::showpos);
	cout<<a<<endl;

	int i=7612;
	cout.setf(ios::hex);
	cout<<hex<<i<<endl;
	return 0;
}
