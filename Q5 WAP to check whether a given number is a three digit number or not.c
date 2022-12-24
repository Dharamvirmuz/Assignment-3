#include<stdio.h>
int main()
{
	int x;
	printf("Enter any number\n");
	scanf("%d",&x);
	
	if( x > 99 && x <= 999 )
	{
		printf("Your number is a Three Digit number");
	}
	else if( x < 99)
	{
		printf("Your number is not a Three Digit Nuber");
	}
	else if( x >= 999)
	{
		printf("Not a 3 Digit number");
	}
	return 0;
}
