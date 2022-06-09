//Program in C to check wheather an integer is Even or Odd.
#include<stdio.h>
int main()
{
	int N;
	printf("Enter the number you want to check: ");
	scanf("%d",&N);
	if (N % 2 == 0)
	  {
         printf("%d is an Even integer.",N);
	  }
  else
    {
    	printf("%d is an Odd integer",N);
    }
    return 0;
}   
