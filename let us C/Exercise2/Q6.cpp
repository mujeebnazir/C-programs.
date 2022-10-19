#include<stdio.h>
#include<math.h>
int main(){
	
	float t,v,wcf;
	
	printf("Enter the value of temperature: \n");
	scanf("%f",&t);
	printf("Enter the value of velocity: \n");
	scanf("%f",&v);
	
	wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75) * pow(v,0.16);
	printf("The wind chill factor is equal to : %f",wcf);
	return 0;
}
