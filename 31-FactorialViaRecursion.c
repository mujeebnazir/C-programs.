#include<stdio.h>
int recFact(int);
int main(){
	int n,r;
	printf("Enter the number: \n");
	scanf("%d",&n);

	r = recFact(n);
	printf("Factorial of %d = %d",n,r);
}

int recFact(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*recFact(n-1);
	}
}
