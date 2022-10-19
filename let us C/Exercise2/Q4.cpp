#include<stdio.h>
#include<math.h>
int main(){
	
	int x,y;
	float radius,theta;
	
	printf("Enter the cartisan coordinates X & Y: \n");
	scanf("%d %d",&x,&y);
	
	radius = sqrt(pow(x,2)+pow(y,2));
	theta = atan(y/x);
	
	printf("The polar coordinates are:\n Radius = %f \n Theta = %f",radius,theta);
	return 0;
}
