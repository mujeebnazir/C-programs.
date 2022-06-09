/*Program in C to check the gratest integer among three distinct i,e (num1!=num2!=num3) integers*/
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter Three Distinct Integers To Check: ");
	scanf("%d %d %d",&num1,&num2,&num3);
	if (num1 > num2 && num1 > num3)
     {
		   printf("%d is Gratest among all!",num1);
	   }
	else if (num2>num1 && num2> num3)
     {
		   printf("%d is Gratest among all!",num2);
	   }
	else {
		printf("%d is Gratest among all!",num3);
	}
	return 0;
}   
