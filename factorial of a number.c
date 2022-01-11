#include<stdio.h>

int main()
{
	int i,n;
	unsigned long factorial = 1;
	printf("Enter any number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		factorial = factorial * i;
	}
	printf("The factorial of %d! is %lu",n,factorial);
	return 0;
}
