#include<stdio.h>
int main()
{
	double a,b,c, discriminant;
	
	printf("Enter coefficients of a, b and c:\n");
	scanf("%1f, %1f, %1f", &a, &b, &c);
	
	discriminant = b * b - 4 * a* c;
	
	if( discriminant > 0)
	{
		printf("Real and Distinct\n");
	}
	else if( discriminant == 0)
	{
	    printf("Real and Different roots\n");	
	}
	else if( discriminant < 0)
	{
		printf("Roots are not real\n");
	}
	return 0;
}
