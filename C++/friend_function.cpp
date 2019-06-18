#include<iostream>
using namespace std;
class Searching
{
	int arr[100];
	int n;
	public:
		friend void search (Searching srch);
		void setElement();
};

void search(Searching srch)
{
	int num,c=0,pos,i;
	cout<<"Enter the number to search..";
	cin>>num;
	for(i=0;i<srch.n;i++)
	{
		if(srch.arr[i]==num)
		{
			c=1;
			pos=i+1;
			break;
		}
	}
		if(c==0)
			cout<<"Number not found";
		else
			cout<<num<<" found at position "<<pos<<endl;
}
void Searching::setElement()
{
	int i;
	cout<<"Enter no of element...";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter arr["<<i+1<<"]th element :";
		cin>>arr[i];
	}
}
int main()
{
	Searching srch;
	srch.setElement();
	search(srch);
	return 0;
}

