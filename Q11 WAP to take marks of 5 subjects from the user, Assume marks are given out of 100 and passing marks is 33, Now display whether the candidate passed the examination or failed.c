#include<stdio.h>
int main()
{
    int a,b,c,d,e,x = 33;
	
	printf("Hello Aman,\n Enter Your Marks\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	
	if( a >= x && b >= x && c >= x && d >= x && e >= x)
	{
		printf("Good, You are pass!");
	}
	else
	{
		printf("oh! You are Fail!!");
	}
	
	
	return 0;
}
