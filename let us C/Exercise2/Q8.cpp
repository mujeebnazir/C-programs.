#include<stdio.h>
int main()
{
	
	float C,D,temp;
	printf("Enter two numbers C & D: \n");
	scanf("%f %f",&C,&D);
	
	temp = C;
	C = D;
	D = temp;
	
	printf(" C = %f\n D = %f",C,D);
	return 0;
}
