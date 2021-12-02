#include<stdio.h>

int main()
{
	double n1, n2;
	char choice;
	
	printf("Enter any arithimetic operation(+, -, *, /, %): ");
	scanf("%c",&choice);
	
	printf("Enter first number: ");
	scanf("%lf",&n1);
	
	printf("Enter second number: ");
	scanf("%lf",&n2);
	
	switch(choice)
	{
		case '+':
			printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
			break;
			
		case '-':
			printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
			break;
			
		case '*':
			printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
			break;
		case '/':
			printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
			break;
	}
	return 0;
}
