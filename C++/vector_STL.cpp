#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	cout<<"\n";
}
int main()
{
	vector<int> v;
	cout<<"Initial size="<<v.size()<<endl;
	int x;
	cout<<"Enter 5 integer values: ";
	for(int i=0;i<5;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cout<<"Size after adding 5 values: ";
	cout<<v.size()<<endl;
	cout<<"Current contents: ";
	display(v);
	v.push_back(6.6);
	cout<<"size="<<v.size()<<endl;
	cout<<"Contents now: ";
	display(v);
	vector<int>::iterator itr=v.begin();
	itr=itr+3;
	v.insert(itr,9);
	cout<<"Content after inserting: "<<endl;
	display(v);
	v.erase(v.begin()+3,v.begin()+5);
	cout<<"Content after deleting: "<<endl;
	display(v);
	cout<<"End\n";
	return 0;
}
