// Simple calculator for two numbers!
#include<stdio.h>
int main()
{
	double a,b;
	char ch;
	scanf("%lf",&a);
	scanf("%c",&ch);
	scanf("%lf",&b);
	switch(ch)
	{
	   case '+':
		      printf("%lf",a+b);
		      break;
	   case '-':
	       printf("%lf",a-b);	
			     break;
	   case '*':
	       printf("%lf",a*b);
		     	break;
   	   case '/':
	       printf("%lf",a/b);
			     break;
	   default:
	       printf("INVALID SYNTAX");
}
}
