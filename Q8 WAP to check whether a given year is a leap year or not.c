#include<stdio.h>
int main()
{
	int i;
	printf("Enter Year\n");
	scanf("%d",&i);
	
	if((( i % 4 == 0) && ( i %100 !=0)) || ( i % 400 == 0))
	{
		printf("%d is a Leap Year",i);
	}
	else
	{
		printf("%d is not a Leap Year",i);
	}
	return 0;
}
