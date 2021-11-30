#include<stdio.h>

int main()
{
	int n1,n2;
	
	printf("Enter first number: ");
	scanf("%d",&n1);
	
	printf("Enter second number: ");
	scanf("%d",&n2);
	
	switch(n1>n2)
	{
		//ig here case 0 is used if the switch condition is not met and what should be printed
		case 0:
			printf("%d is maximum",n2);
			break;
		case 1:
			printf("%d is maximum",n1);
	}
	return 0;
}
