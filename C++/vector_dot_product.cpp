#include <iostream>
using namespace std;
template<class T>
class vector
{
	int size;
	T *v;
	public:
		vector(int m)
		{
			size=m;
			v=new T[size];
			for(int i=0;i<size;i++)
				v[i]=0;
		}
	void operator=(T *a)
	{
		for(int i=0;i<size;i++)
			v[i]=a[i];
	}
	T operator*(vector &v2)
	{
		T sum=0;
		for(int i=0;i<size;i++)
			sum=sum+this->v[i]*v2.v[i];
		return sum;
	}

};
int main()
{
	int x1[3]={1,2,3};
	int x2[3]={4,5,6};

	double y1[3]={1.1,2.2,3.3};
	double y2[3]={4.4,5.5,6.6};

	vector <double> v1(3);
	vector <double> v2(3);
	vector <int> v3(3);
	vector <int> v4(3);

	v1=y1;
	v2=y2;
	v3=x1;
	v4=x2;

	double r1=v1*v2;
	cout<<"Result= "<<r1<<endl;

	int r2=v3*v4;
	cout<<"Result= "<<r2<<endl;
	return 0;
}
