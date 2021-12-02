#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter any number: ");
	scanf("%d",&n);
	
	switch(n<0)
	{
		case 1:
			printf("The chosen number %d is negative",n);
			break;
		
		case 0:
			switch(n>0)
			{
				case 1:
					printf("The chosen number %d is positive",n);
					break;
				
				case 0:
					printf("The chosen number is zero");
					break;
			}
	}
	return 0;
}
