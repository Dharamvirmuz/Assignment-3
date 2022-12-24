#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number :  ");
	scanf("%d",&a);
	
	if( ( a >= 0) && ( a != 0))
	{
		printf("Positive Number");
	}
	else if( a < 0)
	{
		printf("Negative Number");
	}
	else if( a == 0)
	{
		printf("Zero");
	}
}
