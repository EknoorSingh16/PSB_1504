#include<stdio.h>

int main()
{
	//1hour = 60 min
	//1min = 60 sec
	
	int h, m, s;
	printf("Enter no. of hours: ");
	scanf("%d",&h);
	
	 m = h*60;
	 s = m*60;
	
	printf("\nThe Time in mins is: %d",m);
	
	printf("\nThe Time in sec is: %d",s);
	
	return 0;
}
