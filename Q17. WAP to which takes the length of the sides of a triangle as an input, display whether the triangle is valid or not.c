#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter Sides of Triangle a, b, c\n");
	scanf("%d\n",&a);
	scanf("%d\n",&b);
	scanf("%d",&c);
	
	if( a + b > c && a + c > b && b + c > a)
	{
		printf("Valid");
	}
	else
	{
		printf("Unvalid");
	}
	return 0;
}
