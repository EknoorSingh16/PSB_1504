#include<stdio.h>

int main()
{
	int year;
	
	printf("Enter any year: ");
	scanf("%d",&year);
	
	if ((year % 4 == 0) && (year % 100 != 0))
	{
		printf("The year %d is leap year",year);
	}
	else
	{
		printf("The year %d is not a leap year",year);
	}
	return 0;
}
