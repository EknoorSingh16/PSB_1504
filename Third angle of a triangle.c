#include<stdio.h>

int main()
{
	int a1, a2, a3;
	
	printf("Enter the first angle of the triangle: ");
	scanf("%d",&a1);
	
	printf("Enter the second angle of the triangle: ");
	scanf("%d",&a2);
	
	a3 = 180 - (a1 + a2);
	
	printf("The third angle of the triangle is: %d",a3);
	
	return 0;
	
}
