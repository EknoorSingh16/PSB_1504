#include<stdio.h>
#include<math.h>

int main()
{
	double s, a;
	
	//s=side and a=area
	
	printf("Enter the lenght of side of the equilateral triangle: ");
	scanf("%lf",&s);
	
	//root 3 = 1.732
	 a= (1.732 / 4)* s*s;
	 
	 printf("The area of the equilateral triangle is: %.2lf",a);
	 
	 return 0;
}
