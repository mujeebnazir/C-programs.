#include<stdio.h>
int main()
{
	int n,i,flag=1;
	printf("Enter the number: \n");
	scanf("%d",&n);

	for(i=2;i<n;i++){
		if(n%i == 0){
			printf("The given number is not a prime number!");
			flag=0;
			break;
		}
	}
	if(flag == 1){
		printf("The given number is prime!");
	}
	return 0;
}
