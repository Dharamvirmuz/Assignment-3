#include<stdio.h>
int main()
{
	int a;
	
	printf("Enter Number of Days in that month and i give you Your Month Name :  ");
	scanf("%d",&a);
	
	if( a == 31 )
	{
		printf("januaru / March / May / July / August / October / December");
	}
	else if( a == 30)
	{
		printf(" April / June / September / November");
	}
	else if( a == 28 || a == 29)
	{
		printf("February");
	}
	return 0;
}
