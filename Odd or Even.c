#include<stdio.h>

int main()
{
	int a;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("The value of %d is even",a);
	}
	else
	{
		printf("\nThe value of %d is odd",a);
	}
	
}
