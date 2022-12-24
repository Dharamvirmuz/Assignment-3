#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a Character :  ");
	scanf("%c",&ch);
	
	if( isupper(ch))
	{
		printf("Uppercase Letter");
	}
	else if( islower(ch))
	{
		printf("lower Case Letter");
	}
	else if( isdigit(ch))
	{
		printf("Digit",ch);
	}
	else if( ( ch != isupper) && ( ch != islower) &&
	 ( ch != isdigit) )
	{
		printf("Special Character");
	}
	
	return 0;
}
