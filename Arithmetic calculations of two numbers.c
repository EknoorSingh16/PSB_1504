#include<stdio.h>

int main()
{
	int num1, num2, a, s, m, d, mod;
	
	printf("Enter first number: ");
	scanf("%d",&num1);
	
	printf("Enter second number: ");
	scanf("%d",&num2);
	
	a = num1 + num2;
	s = num1 - num2;
	d = num1 / num2;
	m = num1 * num2;
	mod = num1 % num2;
	
	printf("The addition of the numbers is: %d",a);
	printf("\nThe subtraction of the numbers is: %d",s);
	printf("\nThe multiplication of the numbers is: %d",m);
	printf("\nThe division of the numbers is: %d",d);
	printf("\nThe modulus of the numbers is: %d",mod);
	
	return 0;
}
