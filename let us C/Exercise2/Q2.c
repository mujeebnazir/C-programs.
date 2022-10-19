#include<stdio.h>
int main(){
	int num,r;
	printf("Enter any five digit number: \n");
	scanf("%d",&num);
	printf("The reverse of the given number is: ");
	while(num != 0){
		
		r = num % 10;
	
	    printf("%d",r);
	    
	    num = num /10;
	}
	
	
	
	return 0;
}
