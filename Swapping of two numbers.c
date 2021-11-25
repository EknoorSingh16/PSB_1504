#include<stdio.h>

int main()
{
	double a, b;
	
	printf("Enter a: ");
	scanf("%lf",&a);
	
	printf("Enter b: ");
	scanf("%lf",&b);
	
	a = a - b;
	
	b = a + b;
	
	a = b - a;
	
	printf("After swapping, a: %.2lf",a);
	printf("\nAfter swapping, b: %.2lf",b);
	
	return 0;
	}
