#include<stdio.h>

int main()
{
	float cm , meter, km;
	
	printf("Enter lenght in centimeter: ");
	scanf("%f",&cm);
	
	meter = cm / 100.0;
	km = cm / 100000.0;
	
	printf("The length in meter is: %.2f",meter);
	printf("\nThe length in km is: %.2f",km);
	
	return 0;
}
