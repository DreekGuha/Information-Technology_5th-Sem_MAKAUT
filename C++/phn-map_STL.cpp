#include <iostream>
#include <map>
#include<string>
using namespace std;
int main()
{
	string name;
	int number;
	map<string,int> phone;
	cout<<"Enter 3 set of numbers and names\n";
	for(int i=0;i<3;i++)
	{
		cin>>name;
		cin>>number;
		phone[name]=number;
	}
	cout<<"\nSize of map: "<<phone.size()<<endl;
	cout<<"List of phone numbers\n";
	map<string,int>::iterator p;
	for(p=phone.begin(); p!=phone.end();p++)
	{
		cout<<(*p).first<<" "<<(*p).second<<endl;
	}
	cout<<"\nEnter name to search  ";
	cin>>name;
	number=phone[name];
	cout<<"number : "<<number<<endl;
	return 0;


}

