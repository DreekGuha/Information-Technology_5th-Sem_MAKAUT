#include <iostream>
using namespace std;
class Calculator
{
	private:
		float val;
	public:
		void getData()
		{
			cout<<"Enter a number...\n";
			cin>>val;
		}
		void showData()
		{
			cout<<val<<endl;
		}
		Calculator operator+(Calculator arg2);
		Calculator operator-(Calculator arg2);
		Calculator operator*(Calculator arg2);
		Calculator operator/(Calculator arg2);
};
Calculator Calculator::operator+(Calculator arg2)
{
	Calculator temp;
	temp.val=val+arg2.val;
	return temp;
}
Calculator Calculator::operator-(Calculator arg2)
{
	Calculator temp;
	temp.val=val-arg2.val;
	return temp;
}
Calculator Calculator::operator*(Calculator arg2)
{
	Calculator temp;
	temp.val=val*arg2.val;
	return temp;
}
Calculator Calculator::operator/(Calculator arg2)
{
	Calculator temp;
	temp.val=val/arg2.val;
	return temp;
}
int main()
{
	Calculator obj1,obj2,obj3;
	int choice;
	obj1.getData();
	cout<<"1st value entered....\n";
	obj1.showData();
	obj2.getData();
	cout<<"2nd value entered....\n";
	obj2.showData();
	cout<<"Input choice\n1.+\n2.-\n3.*\n4./\n";
	cin>>choice;
	switch(choice)
	{
		case 1:obj3=obj1+obj2;
			break;
		case 2:obj3=obj1-obj2;
			break;
		case 3:obj3=obj1*obj2;
			break;
		case 4:obj3=obj1/obj2;
			break;
		default:
			cout<<"Invalid choice\n";
	}
	cout<<"Result...\n";
	obj3.showData();
	return 0;
}
