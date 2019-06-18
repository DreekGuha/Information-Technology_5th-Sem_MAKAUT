#include<stdio.h>
#define N 20
void graphcolour(int);
int is_safe(int);
int adj[N][N],x[N],n,m;
main()
{
	int i,j;
	printf("\n Enter the number of vertex\n");
	scanf("%d",&n);
	printf("\nEnter the matrix\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("\nEnter the a[%d][%d]th element....",i,j);
			scanf("%d",&adj[i][j]);
		}
	}
	printf("\nThe adjacency matrix is\n");
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{	
				printf("%3d",adj[i][j]);
			}
			printf("\n");
		}
		m=n-1;
		for(i=1;i<=n;i++)
		{
			x[i]=0;
		}
		graphcolour(1);
}
void graphcolour(int k)
{
	int i;
	while(1)
	{
		is_safe(k);
		if(x[k]==0)
			return;
		if(k==n)
		{
			for(i=1;i<=n;i++)
			{
					printf("\t%d",x[i]);
			}
			printf("\n");
		}
		else
			graphcolour(k+1);
	}
}
int is_safe(int k)
{
	int j;
	while(1)
	{
		x[k]=(x[k]+1)%(m+1);
		if(x[k]==0)
			return;
		for(j=1;j<=n;j++)
		{
			if(adj[k][j]!=0 && x[k]==x[j])
				break;
		}
		if(j==n+1)
			return;
	}
}
