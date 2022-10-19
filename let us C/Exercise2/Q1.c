#include<stdio.h>
int main(){
	int num,r,sum=0;
	printf("Enter any five digit number: \n");
	scanf("%d",&num);
	
	while(num != 0){
		r = num % 10;
	    sum += r;
	
	    num = num / 10;
	}
	
	printf("The sum of the digits is equal to : %d",sum);
	
	return 0;
}
