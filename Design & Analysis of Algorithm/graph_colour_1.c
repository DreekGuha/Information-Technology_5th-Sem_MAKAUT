#include<stdio.h>
#define N 20
void graph_colour(int);
int is_safe(int);

int adj[N][N],x[N],n,m;
main()
{
	int i,j;
	printf("Enter the number of vertices");
	scanf("%d",&n);
	printf("ENter the adjacency matrix\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&adj[i][j]);
		}
	}
	printf("Adjacency matrix is\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d",adj[i][j]);
		}
		printf("\n");
	}
	m=n-1;
	for(i=1;i<=n;i++)
	{
		x[i]=0;
	}
	graph_colour(1);
}
void graph_colour(int k)
{
	int i;
	while(1)
	{
		is_safe(k);
		if(x[k]==0)
			break;
		if(k==n)
		{
			for(i=1;i<=n;i++)
			{
				printf("\t%d",x[i]);
			}
			printf("\n");
		}
		else
			graph_colour(k+1);
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
			if(adj[j][k]!=0 && x[j]==x[k])
			break;
		}
		if(j==n+1)
			return;
	}
}
