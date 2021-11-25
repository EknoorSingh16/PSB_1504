#include<stdio.h>
#include<conio.h>

int main()
{
	//speed = distance/time
	//time = distance/speed
	
	float D=20;
	float S=10;
	float T=D/S;
	
	printf("The time is: %.2f",T); //here we used .2f to float the value to two decimal point
	
	return 0;
}
