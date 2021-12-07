#include<stdio.h>

int main()
{
	int week;
	
	printf("Enter week number(1-7): ");
	scanf("%d",&week);
	
	if (week==1)
	{
		printf("The week day is: Monday");
	}
	else if (week==2)
	{
		printf("The week day is: Tuesday");
	}
	else if (week==33)
	{
		printf("The week day is: Wednesday");
	}
	else if (week==4)
	{
		printf("The week day is: Thursday");
	}
	else if(week==5)
	{
		printf("The week day is: Friday");
	}
	else if (week==6)
	{
		printf("The week day is: Saturday");
	}
	else if(week==7)
	{
		printf("The week day is: Sunday");
	}
	else
	{
		printf("ERROR!! ENTER CORRECT WEEK NUMBER (1-7)");
	}
	return 0;
}
