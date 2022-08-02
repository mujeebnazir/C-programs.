/* simple calculator for two numbers!*/
#include<stdio.h>
int main()
{
	double num1,num2;
	char ch;
	scanf("%lf",&num1);
	scanf("%c",&ch);
	scanf("%lf",&num2);
	if (ch == '+'){
		printf("The sum is equal to %lf",num1+num2);
	}
	else if(ch == '-'){
		printf("The subtraction is equal to %lf",num1-num2);
	}
	else if(ch == '*'){
		printf("The multiplication is %lf",num1*num2);
	}
	else if (ch == '/'){
		printf("The division is equal to %lf",num1/num2);
	}
	else{
		printf("INVALID SYNTAX:)");
	}
	return 0;
}
