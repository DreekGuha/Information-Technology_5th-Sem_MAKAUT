#include <stdio.h>
#define N 100
void quicksort(int [],int,int);
int partition(int [],int,int);
main()
{
	int i,n;
	int a[N];
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the numbers...\n");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	quicksort(a,1,n);
	printf("Sorted array is....\n");
	for(i=1;i<=n;i++)
		printf("%2d\n",a[i]);
}
int partition(int a[100],int left,int right)
{
	int i,j,t,pivot;
	i=left-1;
	pivot=a[right];
	for(j=left;j<=right-1;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			t=a[j];
			a[j]=a[i];
			a[i]=t;
		}
	}
	t=a[i+1];
	a[i+1]=a[right];
	a[right]=t;
	return i+1;
}
void quicksort(int a[100],int left,int right)
{
	int p;
	if(left<right)
	{
		p=partition(a,left,right);
		quicksort(a,left,p-1);
		quicksort(a,p+1,right);
	}
}
