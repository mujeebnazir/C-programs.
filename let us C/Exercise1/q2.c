#include<stdio.h>
int main(){
float kmDistance,mDistance,feets,cmDistance;
printf("Enter distance between two cities in kilometers: \n");
scanf("%f",&kmDistance);

mDistance =  1000 * kmDistance;
feets = 3.28084 * mDistance;
cmDistance = 100 * mDistance;

printf("The distance between the two cities in\n Meters = %f\n Feets = %f\n Centimeters = %f",mDistance,feets,cmDistance);


}
