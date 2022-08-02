//Program in c to give name of month on number entered,.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number corresponding to respective month: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Janurary");
			break;
		case 2:
		 printf("Faburary");
			break;
		case 3:
		 printf("March");
			break;
		case 4:
			printf("April");
			break;
		case 5:
		 printf("May");
			break;
		case 6:
		 printf("June");
			break;
		case 7:
		 printf("July");
			break;
		case 8:
		 printf("August");
			break;
		case 9:
			printf("September");
			break;
		case 10:
		 printf("October");
			break;
		case 11:
		 printf("November");
			break;
		case 12:
		 printf("December");
			break;
		default:
		   printf("Invalid Number!");								
	}
	return 0;
}
