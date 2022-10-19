#include<stdio.h>
#include<math.h>

int main(){
	
	float l1,l2,g1,g2,D;
	const float pi = 3.1415;
	
	printf("Enter the latitude L1 &l2: \n");
	scanf("%f %f",&l1,&l2);
	
	printf("Enter the longitute G1 &G2: \n");
	scanf("%f %f",&g1,&g2);
	
	l1 = l1 * (pi/180.0);
	l2 = l2 * (pi/180.0);
	g1 = g1 * (pi/180.0);
	g2 = g2 * (pi/180.0);
	
	
	D = 3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
	printf("The distance in nautical miles is : %f",D);
	return 0;
}
