#include<Stdio.h>

int main()
{
	int n1,n2,n3;
	
	printf("Enter first number: ");
	scanf("%d",&n1);
	
	printf("Enter second number: ");
	scanf("%d",&n2);
	
	printf("Enter third number: ");
	scanf("%d",&n3);
	
	switch(n1<n2 && n1<n3)
	{
		case 1: 
		printf("The minimum number is: ",n1);
		break;
		
		case 0:
		switch(n2<n1 && n2<n3)
		{
		
		case 1:
			printf("The minimum number is: ",n2);
			break;
			
		case 0:
			printf("The minimum number is: ",n3);
			break;
		}	
	}
	return 0;
	
}
