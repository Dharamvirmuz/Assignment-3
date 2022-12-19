#include<stdio.h>
int main()
{
	int x ;
	
	printf("Enter any number\n");
	scanf("%d",&x);
	
	if( x % 2 == 0)
	{
		printf("Even number");
	}
	else
	{
		printf("Odd Number");
	}
	return 0;
}
