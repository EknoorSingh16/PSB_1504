#include<Stdio.h>

int main()
{
	int a, b, c, d, e, f, g, ch;
	printf("Enter two variables a and b here: ");
	scanf("%d %d", &a, &b);
	printf("Enter operation \n 1. Addition \n 2.Differnce \n 3.Multiplication \n 4. Divison \n 5. Modulus");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			c=a+b;
			printf("Sum of two numbers is: %d",c);
			break;
		case 2:
			d=a-b;
			printf("Differnce of two numbers is: %d",d);
			break;
		case 3:
			e=a*b;
			printf("Multiplication of two numbers is: %d",e);
			break;
		case 4:
			f=a/b;
			printf("Division of two numbers is: %d",f);
			break;
		case 5:
			g=a%b;
			printf("Modulus of two numbers is: %d",g);
			break;
		default:
			printf("ERROR !! Enter correct choice.");	
	}
}
