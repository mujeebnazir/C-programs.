//Program in c to find Maximum in the whole Array!
#include<stdio.h>
int main()
{
	int i,max;
	int a[10];
	printf("Enter the values of array: \n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);

    max = a[0];
    for(i=0;i<10;i++){

    	if(max < a[i]){
           max= a[i];
    	}
    }
    printf("The maximum value in array is %d",max);
}
