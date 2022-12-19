#include<stdio.h>
int main()
{
	int x;
	printf("Enter any number\n");
	scanf("%d",&x);
	
	if( (x % 5) == 0 || (x % 5) == 5)
	{
		printf("Given number is Divisible by 5");
	}
	else
	{
		printf("Given number is not Divisible by 5");
	}
	return 0;
}
