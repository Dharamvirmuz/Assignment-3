#include<stdio.h>
int main()
{
	int x,y,z;
	
	printf("Enter any 3 Numbers\n");
	scanf("%d\n",&x);
	scanf("%d\n",&y);
	scanf("%d",&z);
	
	if( ( x>y) && ( x>z))
	{
		printf("larg is %d",x);
	}
	else if(( y>x) && ( y>z))
    {
        printf("Large is %d",y);	
	}
	else if((  x == y) || ( y == z) || ( x == z))
	{
		printf("Greatest number is repeated !\n");
	}
	else
	{
		printf("Large is %d",z);
	}
	
	return 0;
}
