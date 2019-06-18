#include<iostream>
using namespace std;
class Number
{
	public:
		void checkAmstrong(int n);
		void checkPalindrome(int n);
};
void Number::checkPalindrome(int n)
{
	int m=n,r=0,d;
	while(m!=0)
	{
		d=m%10;
		m=m/10;
		r=r*10+d;
	}
	if(r==n)
		cout<<"The number "<<n<<" is a palindrome number"<<endl;
	else
		cout<<"The number "<<n<<" is not a palindrome number"<<endl;
}
void Number::checkAmstrong(int n)
{
	int m=n,d,r=0;
	while(m!=0)
	{
		d=m%10;
		m=m/10;
		r=r+d*d*d;
	}
	if(r==n)
		cout<<"The number "<<n<<" is a Armstrong number"<<endl;
	else
		cout<<"The number "<<n<<" is not a Armstrong number"<<endl;
}
int main()
{
	int num;
	cout<<"Enter the number..."<<endl;
	cin>>num;
	Number obj;
	obj.checkPalindrome(num);
	obj.checkAmstrong(num);
	return 0;
}
