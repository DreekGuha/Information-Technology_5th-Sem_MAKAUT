#include<iostream>
using namespace std;
template<class T>
class array
{
	T *arr;
	int size;
	public:
		array(int n)
		{
			size=n;
			arr=new T[size];
			for(int i=0;i<size;i++)
				arr[i]=i;
			for(int i=0;i<size;i++)
				cout<<arr[i]<<" ";
			
		}
};
int main()
{
	array<int> obj1(10);
	array<double> obj2(20);
	return 0;
}
