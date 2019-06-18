#include <stdio.h>
#define N 100
void mergesort(int [],int,int);
void merge(int [],int,int,int);
main()
{
	int i,n;
	int a[N];
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the numbers...\n");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	mergesort(a,1,n);
	printf("Sorted array is....\n");
	for(i=1;i<=n;i++)
		printf("%2d\n",a[i]);
}
void mergesort(int a[],int l,int u)
{
	int m;
	if(l<u)
	{
		m=(l+u)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,u);
		merge(a,l,m,u);
	}
}
void merge(int a[],int l,int m,int u)
{
	int n1,n2,i,j,k;
	n1=(m-l)+1;
	n2=u-m;
	int L[n1],R[n2];
	for(i=1;i<=n1;i++)
	{
		L[i]=a[i+l-1];
	}
	for(j=1;j<=n2;j++)
	{
		R[j]=a[m+j];
	}
	L[n1+1]=9999;
	R[n2+1]=9999;
	i=1;
	j=1;
	for(k=l;k<=u;k++)
	{
		if(L[i]<R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
	}
}
