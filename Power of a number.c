#include<stdio.h>
#include<math.h>

int main()
{
	double base, exponent, power;
	
	printf("Enter any base no. of your choice: ");
	scanf("%lf",&base);
	
	printf("Enter exponent: ");
	scanf("%lf",&exponent);
	
	power = pow(base, exponent);
	
	printf("%.2lf ^ %.2lf = %.2lf", base, exponent, power);
	
	return 0;
}
