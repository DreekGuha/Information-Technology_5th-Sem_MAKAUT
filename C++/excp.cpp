#include <iostream>
using namespace std;
void test(int x)
{
	try
	{
		if(x==1) throw x;
		else if(x==0) throw 'x';
		else if(x==-1) throw 1.0;
		cout<<"End of try block"<<endl;
	}
	catch(char c)
	{
		cout<<"caught a character"<<endl;
	}
	catch(int m)
	{
		cout<<"caught an integer"<<endl;
	}
	catch(double c)
	{
		cout<<"caught a double"<<endl;
	}
	cout<<"End of try-catch block"<<endl;
}
int main()
{
	cout<<"x=1\n";
	test(1);
	cout<<"x=0\n";
	test(0);
	cout<<"x=-1\n";
	test(-1);
	cout<<"x=2\n";
	test(2);
	return 0;
}
