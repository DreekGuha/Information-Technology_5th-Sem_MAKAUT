#include <stdio.h>
int power(int,int);
main()
{
	int x,y,c;
	printf("Enter the value of x\n");
	scanf("%d",&x);
	printf("Enter the value of y\n");
	scanf("%d",&y);
	c=power(x,y);
	printf("The result is %d\n",c);
}
int power(int x,int y)
{
	if(y==0)
		return 1;
	else
		return(power(x,y-1)*x);

}


