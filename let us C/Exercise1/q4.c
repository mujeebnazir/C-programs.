#include<stdio.h>
int main(){
	float tempInf,tempInC;
	printf("Enter the value of temperature in Fahrenheit: \n");
	scanf("%f",&tempInf);
	
	tempInC = (tempInf - 32) * 5/9;
	printf("The value of the temperature in centigrade is equal to: %f",tempInC);
}
