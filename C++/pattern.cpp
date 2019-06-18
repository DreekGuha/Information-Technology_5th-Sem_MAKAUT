#include<iostream> 
using namespace std;
class A
{
	public:
		void pattern(int n)
		{
			int m=(n+1)/2,k;
			int nstar,i,j,nblank;
			nstar=1;
			nblank=m-1;
			for(i=1;i<=m;i++)
			{
				for(j=1;j<=nblank;j++)
					cout<<" ";
				for(k=1;k<=nstar;k++)
					cout<<"*";
				cout<<endl;
				nblank=nblank-1;
				nstar=nstar+2;
			}
			nblank=1;
			nstar=nstar-4;
			for(i=1;i<=m-1;i++)
			{
			for(j=1;j<=nblank;j++)
				cout<<" ";
			for(k=1;k<=nstar;k++)
				cout<<"*";
			cout<<endl;
			nblank=nblank+1;
			nstar=nstar-2;
			}
		}
		
};
class B: virtual public A
{};
class C: virtual public A
{};
class D: public B,public C
{};
int main()
{
	D objD;
	objD.pattern(7);
	return 0;
}
