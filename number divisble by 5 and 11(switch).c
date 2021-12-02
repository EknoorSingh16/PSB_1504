#include<Stdio.h>

int main()
{
	int n;
	
	printf("Enter any number: ");
	scanf("%d",&n);
	
	switch(n%5==0 && n%11==0)
	{
		case 0:
			printf("The chosen number %d is not divisible by 5 and 11",n);
			break;
			
		case 1:
			printf("The chosen number %d is divisble by 5 and 11",n);
			break;
	}
	return 0;
}
