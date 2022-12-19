#include<stdio.h>
int main()
{
	int x;
	printf("Enter any number\n");
	scanf("%d",&x);
	
	if( x > 99 )
	{
		printf("Your number is a Three Digit number");
	}
	else if( x < 99)
	{
		printf("Your number is not a Three Digit Nuber");
	}
	return 0;
}
