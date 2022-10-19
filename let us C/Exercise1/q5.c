#include<stdio.h>
int main(){
	
	float length,breadth,radius,rectArea,circleArea,rectPerimeter,circleCircum;
	
	printf("Enter the length of the rectangle: \n");
	scanf("%f", &length);
	printf("Enter the breadth of the rectangle: \n");
	scanf("%f", &breadth);
	printf("Enter the radius of the circle: \n");
	scanf("%f", &radius);
	
	rectArea = length * breadth;
	rectPerimeter = 2 * (length + breadth);
	
	circleArea = 3.14 * radius * radius;
	circleCircum = 2 * 3.14 * radius;
	
	printf("Rectangle: \n Area = %f\n Perimeter = %f \n",rectArea,rectPerimeter);
	printf("Circle: \n Area = %f\n Circumfrence = %f \n",circleArea,circleCircum);
	return 0;
}
