#include <stdio.h>
#define N 100
void sort(int [],int);
main()
{
	int i,n;
	int a[N];
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the numbers...\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,n);
	printf("Sorted array is....\n");
	for(i=0;i<n;i++)
		printf("%2d\n",a[i]);
}
void sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[j]<a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
