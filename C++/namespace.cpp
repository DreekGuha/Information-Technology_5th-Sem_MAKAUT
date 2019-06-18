#include <iostream>
using namespace std;
namespace nm
{
	class test
	{
	private:
		int m;
	public:
		test(int a)
		{
			m=a;
		}
		void display()
		{
			cout<<"m= "<<m<<endl;
		}
	};
}
int main()
{
	nm::test t1(200);
	t1.display();

	using namespace nm;
	test t2(400);
	t2.display();
}
