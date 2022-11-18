#include<stdio.h>
int main()
{
	int i;
	printf("Enter a number=");
	scanf("%d",&i);
	switch(i)
	{
		case 10:
			printf("The entered number is 10.");
			break;
		case 20:
			printf("The entered number is 20.");
			break;
		case 30:
			printf("The entered number is 30.");
			break;
		case 40:
			printf("The entered number is 40.");
			break;
		case 50:
			printf("The entered number is 50.");
			break;
		default:
			printf("Please enter a valid number.");
	}
	return 0;
}
