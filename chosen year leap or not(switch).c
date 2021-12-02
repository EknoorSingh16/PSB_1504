#include<stdio.h>

int main()
{
	int year;
	
	printf("Enter any year: ");
	scanf("%d",&year);
	
	switch((year%4==0) && (year%100!=0))
	{
		case 0: 
		printf("The chosen year %d is not a leap year",year);
		break;
		
		case 1:
		printf("The chosen year %d is leap year",year);
		break;
			
	}
	return 0;
}
