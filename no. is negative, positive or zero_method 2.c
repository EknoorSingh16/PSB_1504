#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	if (num==0)
	printf("The number chosen is zero",num);
	
	else if (num>0)
	printf("The number %d is positive",num);
	
	else if (num<0)
	printf("The number %d is negative",num);
	
	return 0;
}
