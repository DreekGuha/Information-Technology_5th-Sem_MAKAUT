#include<iostream>//example of constructor overloading
using namespace std;
class sumarray
{
		public:
			sumarray(int sum)
			{
				int dset[5];
				int i;
				cout<<"Enter numbers for integer data set array "<<endl;
				for(i=0;i<5;i++)
				{
					cout<<"Enter dset["<<i+1<<"]"<<endl;
					cin>>dset[i];
					sum=sum+dset[i];
				}
				cout<<"Total is.."<<sum<<endl;
			}
			sumarray(double sum)
			{
				float dset[5];
				int i;
				cout<<"Enter numbers for float data set array "<<endl;
				for(i=0;i<5;i++)
				{
					cout<<"Enter dset["<<i+1<<"]"<<endl;
					cin>>dset[i];
					sum=sum+dset[i];
				}
				cout<<"Total is.."<<sum<<endl;	
			}

};	
int main()
{
	sumarray obj1(0);
	sumarray obj2(0.0);
	return (0);
}
