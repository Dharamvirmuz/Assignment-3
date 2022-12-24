 #include<stdio.h>
 int main()
 {
   int a;
   printf("Enter a Number\n");
   scanf("%d",&a);
   
   if ( ( a  % 3 == 0) &&  ( a % 2 == 0 ))
   {
   	 printf("Divisible by 3 and also Divisible by 2");
   }
   else printf("Not Divisible by 3 and Not Divisible by 2");
  
   return 0;
 	
 }
