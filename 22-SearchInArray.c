//Program to search element in an array
#include<stdio.h>
int main(){
	int arr[10];
	int n,i,flag= 0;

	printf("Enter the values of array: \n");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);


	printf("Enter the element you wish to find: \n");
	scanf("%d",&n);

	for(i=0;i<=10;i++){
		if(arr[i] == n){
			printf("Element was found at position %d",i+1);
			flag=1;
			break;
		}
	}
	if(flag == 0){
		printf("Element not found!!");
	}
}
