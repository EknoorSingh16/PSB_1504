#include<stdio.h>

int main()
{
	int l, b, a;
	
	printf("Enter length of the rectangle: ");
	scanf("%d",&l);
	
	printf("Enter breadth of the rectangle: ");
	scanf("%d",&b);
	
	a = l*b;
	
	printf("The area of the rectangle is: %d",a);
	
	return 0;
}
