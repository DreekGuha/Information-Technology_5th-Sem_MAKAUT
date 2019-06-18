#include <stdio.h>
#define N 100
void heapsort(int [],int);
void heapify(int [],int,int);
main()
{
	int i,n;
	int a[N];
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the numbers...\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	heapsort(a,n);
	printf("\nSorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("\n%2d",a[i]);
	}
}
void heapify(int a[],int n,int i)
{
	int largest=i,l,r,t;
	l=2*i+1;
	r=2*i+2;
	if(l<n && a[l]>a[largest])
	{
		largest=l;
	}
	if(r<n && a[r]>a[largest])
	{
		largest=r;
	}
	if(largest!=i)
	{
		t=a[i];
		a[i]=a[largest];
		a[largest]=t;
		heapify(a,n,largest);
	}
}
void heapsort(int a[],int n)
{
	int i,t;
	for(i=n/2;i>=0;i--)
	{
		heapify(a,n,i);
	}
	for(i=n-1;i>=0;i--)
	{
		t=a[0];
		a[0]=a[i];
		a[i]=t;
		heapify(a,i,0);
	}
}
