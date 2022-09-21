/*
Display series in c upto 'n' numbers:
2 4 8 16 32...
*/
#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the number upto which you the series to be genrated: \n");
	scanf("%d",&n);

	for(i = 2;i<=n;i*=2){
		printf("%d",i);
	}
	return 0;
}
