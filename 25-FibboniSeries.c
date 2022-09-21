#include<stdio.h>
int main()
{
	int i,arr[12];

	a[0]=0;
	a[1]=1;

	for(i=2;i<=11;i++)
	{
		a[i] = a[i-1]+a[i-2];
	}
	printf("The fibonacci series is as follows: \n");
    for(i=0;i<=11;i++)
    {
  	printf("%d\t",arr[i]);
    }
}
