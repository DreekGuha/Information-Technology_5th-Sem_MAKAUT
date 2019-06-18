#include <stdio.h>
#include<math.h>
void nqueen(int,int);
int place(int,int);
int x[10];
main()
{
	int n;
	printf("Enter the number of queens\n");
	scanf("%d",&n);
	printf("positions are\n");
	nqueen(1,n);
}
void nqueen(int k,int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		if(place(k,i)==1)
		{
			x[k]=i;
			if(k==n)
			{
				for(j=1;j<=n;j++)
					printf("%2d",x[j]);
				printf("\n");
			}
			else
				nqueen(k+1,n);
		}
	}
}
int place(int k,int i)
{
	int j;
	for(j=1;j<=k-1;j++)
	{
		if((x[j]==i)||(abs(x[j]-i))==(abs(j-k)))
			return 0;
	}
			return 1;
}
