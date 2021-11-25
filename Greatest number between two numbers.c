#include<stdio.h>

int main()
{
	int num1, num2;
	
	printf("Enter first number: ");
	scanf("%d",&num1);
	
	printf("Enter second number: ");
	scanf("%d",&num2);
	
	//if num1 is greater number
	if (num1>=num2)
	printf("The greater number is: %d",num1);
	
	//if num2 is greater number
	if (num2>=num1)
	printf("The greater number is: %d",num2);
	
	return 0;
	
	}
