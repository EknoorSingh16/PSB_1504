#include<Stdio.h>

int main()
{
	int num;
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	int i, rem, sum=0;
	
	for(i=1;i<num;i++)
	{
	 	rem = num % i;
	 	if(rem == 0)
	 	{
	 		sum = sum + i;	
		}
	}
	if(sum==num)
		printf("The number:%d is a perfect number",num);		
	
	else
		printf("The number:%d is not a perfect nuumber",num);
	
	return 0;	
	}
