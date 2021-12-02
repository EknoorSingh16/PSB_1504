#include<stdio.h>

int main()
{
	int a1,a2,a3;
	
	printf("Enter first angle of the triangle: ");
	scanf("%d",&a1);
	
	printf("Enter second angle of the triangle: ");
	scanf("%d",&a2);
	
	printf("Enter third angle of the triangle: ");
	scanf("%d",&a3);
	
	if((a1==a2)&& (a2==a3))
	{
		printf("The triangle is equilateral triangle");
	}
	else if((a1==a2)||(a2==a3)||(a1==a3))
	{
		printf("The triangle is isosceles triangle");
	}
	else
	{
		printf("The triangle is scalene triangle");
	}
	return 0;
}
