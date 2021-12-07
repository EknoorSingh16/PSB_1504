#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c;
	float root1, root2, imaginary;
	float discriminant;
	
	printf("Enter any values of a,b,c of quadratic equation(a^2+bx+c): ");
	scanf("%f%f%f",&a,&b,&c);
	
	//finding discriminant
	discriminant = ((b*b) - (4*a*c));
	
	//now finding roots depeding upon the discriminant
	switch(discriminant>0)
	{
		case 1: 
		root1 = (-b + sqrt(discriminant)) /(2*a);
		root2 = (-b - sqrt(discriminant)) /(2*a);
		
		printf("Two Distinct and real roots exist: %.2f and %.2f", root1, root2);
		break;
		
		case 0:
			switch(discriminant<0)
			{
				case 1:
					
					imaginary = sqrt(-discriminant) / (2*a);
					root1 =  (-b/(2*a)) + (imaginary);
					root2 =  (-b/(2*a)) - (imaginary);
					
					printf("Two distinct complex root exists: %.2f and %.2f", root1, root2);
					break;
					
					case 0:
						//if discriminant = 0
						root1=root2=-b/(2*a);
						printf("Two equal and real roots exists: %.2f and %.2f",root1, root2);
						break;
			}
	}
	return 0;
}
