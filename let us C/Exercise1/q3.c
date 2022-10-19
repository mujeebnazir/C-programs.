#include<stdio.h>
int main(){
	int sub1,sub2,sub3,sub4,sub5;
	float aggregateMarks,percentage;
	int totalMarks =500;
	
	printf("Marks scored in sub1: \n");
	scanf("%d",&sub1);
	printf("Marks scored in sub2: \n");
	scanf("%d",&sub2);
	printf("Marks scored in sub3: \n");
	scanf("%d",&sub3);
	printf("Marks scored in sub4: \n");
	scanf("%d",&sub4);
	printf("Marks scored in sub5: \n");
	scanf("%d",&sub5);
	
	aggregateMarks = sub1+sub2+sub3+sub4+sub5;
	percentage = aggregateMarks/totalMarks * 100;
	
	printf("The sudent has obtained the:\n Aggregate marks = %f /500\n Percentage = %f %",aggregateMarks,percentage);

}
