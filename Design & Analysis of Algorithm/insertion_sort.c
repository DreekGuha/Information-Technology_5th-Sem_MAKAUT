#include <stdio.h>
#define N 100
void sort(int [],int);
main()
{
	int i,n;
	int a[n];
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the munbers...\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,n);
	printf("Sorted array is....\n");
	for(i=0;i<n;i++)
		printf("%2d\n",a[i]);
}
void sort(int a[],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		j=i-1;
		k=a[i];
		while(j>=0 && a[j]>k)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=k;
	}
	
}
