#include<iostream>//error
using namespace std;
class MyIncrClass
{
	private:
		int mCounter;
	public:
		MyIncrClass()
		{
			mCounter=0;
		}
	MyIncrClass operator++()//overloading of pre increment
	{
		++this->mCounter;
		return *this;
	}
	MyIncrClass operator++(int)//dummy int argument is passed to mention overloading of post increment
	{
		MyIncrClass temp;
		temp.mCounter=this->mCounter++;
		return temp;
	}
	void display()
	{
		cout<<mCounter<<endl;
	}
};
int main()
{
	MyIncrClass counter;
	counter++;//post increment operator function is called here
	counter.display();
	++counter;//pre increment operator function is called here
	counter.display();
	return 0;
}
