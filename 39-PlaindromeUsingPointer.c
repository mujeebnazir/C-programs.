int main(){
int flag=1;
char str[50],*p,*q;
  
  p = &str[0];
  printf("Enter the string: \n");
  scanf("%s",&str);
  
  q=p;
  while(q!= '\0'){
    q++;
}
  q--;
 while(p <= q){
   if(*p != *q)
   {
     printf("String Is not Plaindrome.");
   flag= 0;
   break;
   }
   else{
     p++;
     q--;
   }
 } 
  if(flag==1){
  printf("String is Plaindrome.");
  }
  return 0;
}
