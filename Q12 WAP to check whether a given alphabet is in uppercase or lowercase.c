#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any Alphabet\n");
	scanf("%c",&ch);
	
	if( isupper(ch) )
	{
		printf("Uppercase Alphabet");
	}
	else if( islower(ch))
	{
		printf("Lowercase Alphabet");
	}
	else
	{
		printf("Not a proper alphabet");
	}
	return 0;
}
