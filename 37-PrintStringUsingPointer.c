#include<stdio.h>

int main()
{
    char str[6] = "Hello";
    char *ptr;
    ptr = &str; 
  
   while(*ptr != '\0'){
   printf("%c",*ptr);
   ptr++


    return 0;
}
