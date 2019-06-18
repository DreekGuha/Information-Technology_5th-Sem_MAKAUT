#include<stdio.h>
main()
{
	int i,k,n;
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
		if(a[i]==k)
			break;
	}
	if(i<n)
		printf("Element %d found at position %d \n",k,i+1);
	else
		printf("Element not found\n");
}
