#include<stdio.h>
int main(){
	float s1,s2,s3,area,x,temp=0,r;
	
	printf("Enter the length of the side one: \n");
	scanf("%f",&s1);
	printf("Enter the length of the side two: \n");
	scanf("%f",&s2);
	printf("Enter the length of the side three: \n");
	scanf("%f",&s3);
	
	x = (s1+s2+s3)/ 2;
	r = x*(x-s1)*(x-s2)*(x-s3);
	
	area = r/2;
	while(area != temp){
		temp = area;
		area=(r/temp+temp)/2;
	}
	printf("The area of the triangle is : %f",area);
	return 0;
}
