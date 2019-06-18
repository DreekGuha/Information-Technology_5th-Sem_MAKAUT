#include <stdio.h>
#include<string.h>
#define N 50
int CPF[N];

void compute_prefix_function(char p[])
{
	int n,k,q;
	n=strlen(p);
	CPF[0]=-1;
	CPF[1]=0;
	for(q=2;q<=n;q++)
	{
		k=CPF[q-1]+1;
		while(k>0 && p[q-1]!=p[k])
			k=CPF[k]+1;
		CPF[q]=k;
	}
}
void kmp_match(char t[],char p[])
{
	int tlen,plen,j=0,i=0;

	tlen=strlen(t);
	plen=strlen(p);

	while(i<=tlen)
	{
		if(t[i]==p[j])
		{
			j++;
			i++;
		}
		else
			j=CPF[j];
		if(j==plen)
			printf("\nPattern occurs with shift %d\n",i-plen+1);
	}
}
main()
{
	char t[N],p[N];

	printf("\nEnter the text\n");
	scanf("%s",&t);

	printf("\nEnter the pattern\n");
	scanf("%s",&p);

	compute_prefix_function(p);
	kmp_match(t,p);
}
