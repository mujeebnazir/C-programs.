#include<stdio.h>
int main(){
	float basicSalary,dearnessAllowance,rentAllowance,grossSalary;
	printf("Enter Ramesh's basic salary: \n");
	scanf("%f",&basicSalary);
	 
	dearnessAllowance = 0.4 * basicSalary;
	rentAllowance = 0.2 * basicSalary;
	
	grossSalary = basicSalary + dearnessAllowance + rentAllowance;
	printf("Gross salary of Ramesh is Equal to : %f",grossSalary);
}
