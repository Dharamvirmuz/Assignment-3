#include<stdio.h>
int main()
{
	int x,y,z,profit;
	
	printf("Enter the Cost Price of your Product\n");
	scanf("%d",&x);
	
	printf("Enter the Selling Price of your Product\n");
	scanf("%d",&y);
	
	if( x > y )
	{
		profit = y - x;
		z = profit/x*100;
		printf("Profit = %d Percentage",z);
		
	}
	else if( x > y )
	{
		profit = y - x;
		z = profit/x*100;
		printf("Loss = %d Percentage",z);
	}
	else if( x == y)
	{
		printf("No Profit,No Loss");
	}
	
	return 0;
}
