#include<stdio.h>
main()
{
	int i,t,c,j,k,n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search\n");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	c=search(a,n,k);
	if(k==a[c])
		printf("Element found\n");
	else
		printf("Element not found\n");
}
int search(int a[100],int n,int k)
{
	int m,l=0,u=n;
	while(l<u)
	{
		m=(u+l)/2;
		if(k<a[m])
			u=m-1;
		else if(k>a[m])
			l=m+1;
		else
			return m;
	}
}
