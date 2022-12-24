#include<stdio.h>
int main()
{
	int a;
	printf("Enter a Number : ");
	scanf("%d",&a);
	
	
	if( ( a % 7 == 0 ) || ( a % 3 == 0 ))
	{
	
		printf("Yes Divisible By 7 or 3");
	}
	else printf("No Not Divisible by 7 or 3");
	
	return 0;
}
