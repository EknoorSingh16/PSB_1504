#include<stdio.h>
#include<math.h>

int main()
{
	float r, d, c, a;
	
	printf("Enter radius of the circle: ");
	scanf("%f",&r);
	
	d = 2*r;
	c = 2*M_PI*r;
	a = M_PI*r*r;
	
	printf("The diameter of the circle is: %.2f",d);
	printf("\nThe circumference of the circle is: %.2f",c);
	printf("\nThe area of the circle is: %.2f",a);
	
	return 0;
}
