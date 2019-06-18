#include <stdio.h>
#include<string.h>
#define N 50
void STRING_MATCH(char t[],char p[])
{
	int tlen,plen,i,j,limit;
	plen=strlen(p);
	tlen=strlen(t);
	limit=tlen-plen;
	if(limit<0)
		printf("Invalid input\n");
	else
	{
		for(i=0;i<=limit;i++)
		{
			for(j=0;j<plen;j++)
			{
				if(p[j]!=t[i+j])
					break;
			}
			if(j==plen)
				break;
		}
	}
	if(j==plen)
	{
		printf("pattern found and length of the pattern is %d\n",j);
		printf("\nthe pattern is\n");
		puts(p);

	}
	else
		printf("Pattern not found\n");

}
main()
{
	char p[N],t[N];
	printf("Enter the text\n");
	gets(t);

	printf("Enter the pattern\n");
	gets(p);

	STRING_MATCH(t,p);
}
