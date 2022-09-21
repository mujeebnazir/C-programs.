//program in c to display name of month using switch
#include<stdio.h>
int main()
{
	int a;
	printf("Please enter value\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		printf("January");
		break;
		case 2:
		printf("Febraury");
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
		printf("Error! 'a' has a max limit of 12");
	}
	return 0;
}
