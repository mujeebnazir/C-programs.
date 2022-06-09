//Program in C to add two given integers!
#include<stdio.h>
int main()
{
  int int1,int2,sum;
  printf("Enter two integers you want to add: ");
  scanf("%d %d",&int1,&int2);
  sum = int1+int2;
  printf("The sum of %d and %d is %d",int1,int2,sum);
  return 0;
}
