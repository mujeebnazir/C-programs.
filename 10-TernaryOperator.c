//Program in c to take maximum among two numbers.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two integers:");
	scanf("%d %d",&a,&b);
	c = a>b?a:b;
	printf(" The maimum number is %d",c);
	return 0;
}
