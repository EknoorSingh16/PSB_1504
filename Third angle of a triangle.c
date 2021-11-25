#include<stdio.h>

int main()
{
	int A1, A2;
	
	A1;
	printf("Enter first angle of the triangle: ");
	scanf("%d",&A1);
	
	A2;
	printf("Enter second angle of the triangle: ");
	scanf("%d",&A2);
	
	int Total = A1 + A2;
	int A3 = 180 - Total;
	printf("The Third angle of the triangle is: %d",A3);
	
	return 0;
}
