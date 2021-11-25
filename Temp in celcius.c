#include<Stdio.h>

int main()
{
	float f, c;
	
	printf("Enter the temperature in fahrenhiet: ");
	scanf("%f",&f);
	
	c = (f-32)*5/9;
	
	printf("The temperature in celcius is: %.2f",c);
	
	return 0;
	}
