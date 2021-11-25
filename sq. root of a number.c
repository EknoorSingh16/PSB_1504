#include<stdio.h>
#include<math.h>

int main()
{
	double num, sR;
	
	printf("Enter any number of your choice: ");
	scanf("%lf",&num);
	
	sR = sqrt(num);
	
	printf("The square root of your number is: %.2lf",sR);
	
	return 0;
}
