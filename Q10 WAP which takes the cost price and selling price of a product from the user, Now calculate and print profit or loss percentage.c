#include<stdio.h>
int main()
{
	int x,y,profit, Loss, percentage, LossP;
	
	printf("Enter the Cost Price of your Product\n");
	scanf("%d",&x);
	
	printf("Enter the Selling Price of your Product\n");
	scanf("%d",&y);
	
	if( x < y )
	{
		
		profit = y - x;
		
		percentage = profit * 100 / x;
		
		printf("Profit = %d rupees and Profit Percentage = %d",profit,percentage);
	
		
	}
	else if( x > y )
	{
		
		
		Loss = x - y;
		
		LossP = Loss * 100 / y;
		printf("Loss %d rupees and Loss percentage = %d",Loss,LossP);
	
	}
	else if( x == y)
	{
		printf("No Profit,No Loss");
	}
	
	return 0;
}
