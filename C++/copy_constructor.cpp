#include <iostream> // copy comstructor
#include<string>
using namespace std;
class SomeData
{
	private:
		int *pd;
		string id;
	public:
		SomeData(SomeData &ref)
		{
			cout<<"copy constructor called"<<endl;
			pd=new int(*ref.pd);
			id="copy constructor";
		}
		SomeData(string name,int n)
		{
			pd=new int(n);
			id=name;
			cout<<"constructor for "<<id<<endl;
		}
		~SomeData()
		{
			cout<<"Destructor for "<<id<<endl;
			delete pd;
		}
		void display()
		{
			cout<<"id="<<id<<endl;
			cout<<"*pd="<<*pd<<endl;
		}

};
int main()
{
	SomeData s1("First",9);
	SomeData s2=s1;
	s2.display();
	return 0;
}

