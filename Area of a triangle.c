#include<stdio.h>
#include<math.h>

int main()
{
	float base, height, area;
	
	printf("Enter the base length of the traingle: ");
	scanf("%f",&base);
	
	printf("Enter the height lenght of the triangle: ");
	scanf("%f",&height);
	
	area = (height*base)/2;
	
	printf("The area of the traingle i: %.2f",area);
	
	return 0;
	
}
