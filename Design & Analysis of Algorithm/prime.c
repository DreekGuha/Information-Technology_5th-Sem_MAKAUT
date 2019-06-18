#include<stdio.h>
main()
{
	int i,n,c=0;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			c++;
	}
	if(c==0)
		printf("prime");
	else
		printf("not prime");
		
}
