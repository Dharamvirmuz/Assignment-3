#include<stdio.h>
int main()
{
	int x , y;
	printf("Enter Two numbers\n");
	scanf("%d\n",&x);
	scanf("%d",&y);
	
	if( x > y)
	{
		printf("Number %d is greater\n",x);
	}
	else if ( x < y)
	{
		printf("Number %d is greater\n",y);
	}
	else if( x == y)
	{
		printf(" Both are equals\n");
	}
    return 0;
}
