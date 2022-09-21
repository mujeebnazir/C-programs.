#include <stdio.h>
int main()
{
   int x,y,*p,*q, sum;  
 
   printf(" Input the first number : ");
   scanf("%d", &x);
   printf(" Input the second  number : ");
   scanf("%d", &y);   
 
   p = &x;
   q = &y;
 
   sum = *p + *q;
 
   printf(" The sum of the entered numbers is : %d\n\n",sum);
 
   return 0;
}
