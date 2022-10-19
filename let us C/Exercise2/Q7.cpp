#include<stdio.h>
#include<math.h>
int main(){
	float x,y;
	printf("Enter the angle: \n");
	scanf ("%f",&y);
	const float pi = 3.1415;
	x = y * (pi/180.0);
	
	float SIN = sin(x);
	float COS = cos(x);
	float TAN = tan(x);
	float SEC = 1/cos(x);
	float COSEC = 1/sin(x);
	float COT = 1/tan(x);
	
	
	printf(" Sin(x) = %f \n Cos(x) = %f \n Tan(x) = %f \n Sec(x) = %f \n Cosec(x) = %f \n Cot(x) = %f \n",SIN,COS,TAN,SEC,COSEC,COT);
	return 0;
}
