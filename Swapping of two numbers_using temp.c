#include<stdio.h>

int main()
{
	double a, b, temp;
	
	printf("Enter a: ");
	scanf("%lf",&a);
	
	printf("Enter b: ");
	scanf("%lf",&b);
	
	//for swapping
	temp = a;
	
	a = b;
	
	temp = b;
	
	printf("After swapping, a: %.2lf",a);
	printf("After swapping, b: %.2lf",b);
	
	return 0;
}
