#include<stdio.h>
typedef struct STR
{
	int m[10][10];
	int s[10][10];
}mat;
 
void matrix_chain_order(int [],int);

main()
{
	int i,j,n,p[10];
	mat x;
	printf("\nEnter the no of dimension\n");
	scanf("%d",&n);
	printf("\nEnter the dimension\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	
	matrix_chain_order(p,n-1);
}
void print_optimal_paren(int s[10][10],int i,int j)
{
	if(i==j)
	    printf("A%d",i);
	    else
	    {
	    	printf("(");
	    	print_optimal_paren(s,i,s[i][j]);
	    	print_optimal_paren(s,s[i][j]+1,j);
	    	printf(")");
	    }
}
void matrix_chain_order(int p[],int n)
{
	int i,k,q,j,l;
	mat x;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		   x.s[i][j]=0;
	}
	for(i=1;i<=n;i++)
	   x.m[i][i]=0;
	   for(l=2;l<=n;l++)
	   {
	           for(i=1;i<=(n-l+1);i++)
       	   {
	   	        j=i+l-1;
	   	        x.m[i][j]=99999;
	   	        for(k=1;k<=(j-1);k++)
	   	        {
	   	        	q=x.m[i][k]+x.m[k+1][j]+p[i-1]*p[k]*p[j];
	   	        	if(q<x.m[i][j])
	   	        	{
	   	        		x.m[i][j]=q;
	   	        		x.s[i][j]=k;
	   	        	}
	   	        }
	          }
	   }
	   printf("M matrix is\n");
	   for(i=1;i<=n;i++)
	   {
	   	for(j=2;j<=n;j++)
	   	{
	   		printf("%5d",x.m[i][j]);
	   	}
	   	printf("\n");
	   }
	   printf("S matrix is\n");
	   for(i=1;i<=n;i++)
	   {
	   	for(j=2;j<=n;j++)
	   	{
	   		printf("%5d",x.s[i][j]);
	   	}
	   	printf("\n");
	   }
	   print_optimal_paren(x.s,1,n);
}

