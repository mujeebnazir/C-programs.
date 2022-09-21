#include<stdio.h>
int recFibb(int);
int main()
{

	int n,r,i;
	printf("Enter the number: \n");
	scanf("%d",&n);

    for(i=1;i<=n;i++)
	r = recFibb(n);
	printf("%d ",r);
}

int recFibb(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return recFibb(n-1)+recFibb(n-2);
	}
}
