#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	
	if( ( x & 1) == 1)
	{
		printf("Number is odd\n");
	}
	else
	{
		printf("Number is Even\n");
	}
	return 0;
}
