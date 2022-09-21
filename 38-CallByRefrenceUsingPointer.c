#include <stdio.h>
void swapNumbers(int *x,int *y,int *z);
int main()
{
    int x,y,z;
	printf("------------------------------------------------------\n");	
    printf(" Input the value of 1st element : ");
    scanf("%d",&x);
	printf(" Input the value of 2nd element : ");
    scanf("%d",&y);
	printf(" Input the value of 3rd element : ");
    scanf("%d",&z);
	
	
    printf("\n The value before swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n",x,y,z);
    swapNumbers(&x,&y,&z);
    printf("\n The value after swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n\n",x,y,z);
    return 0;
}
void swapNumbers(int *x,int *y,int *z)
{
    int tmp;
    tmp=*y;
    *y=*x;
    *x=*z;
    *z=tmp;
}
