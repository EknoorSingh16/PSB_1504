#include<stdio.h>
#include<math.h>

int main()
{
	float principle, rate, time, SI;
	
	printf("Enter principle amount: ");
	scanf("%f",&principle);
	
	printf("Enter rate: ");
	scanf("%f",&rate);
	
	printf("Enter time: ");
	scanf("%f",&time);
	
	SI = (principle*time*rate)/100;
	
	printf("The simple interest is: %f",SI);
	
	return 0;
}
