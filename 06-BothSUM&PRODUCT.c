//Program to sum & multiply two integers simultaneously.
#include<stdio.h>
int main()
{
	int a,b,sum,multiplication;
	printf("Enter two integers: ");
	scanf("%d %d",&a,&b);
	sum=a+b;
	multiplication=a*b;
	printf("The sum of two integers is %d",sum);
	printf("The multiplication of two integers is %d",multiplication);
	return 0;
}
