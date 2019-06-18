#include<iostream>//use of class template
using namespace std;
template<class T1, class T2>
class test
{
	T1 a;
	T2 b;
	public:
		test(T1 x,T2 y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<a<<" and "<<b<<endl;
		}

};
int main()
{
	test<float,int> obj1(1.23f,124);
	test<int,char> obj2(100,'D');
	obj1.show();
	obj2.show();
	return 0;
}
