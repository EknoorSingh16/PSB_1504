#include<stdio.h>

int main()
{
	int a;
	
	printf("Enter any character: ");
	scanf("%c",&a);
	
	if(a>='A' && a<='Z')
	{
		printf("The entered character is uppercase: '%c'",a);
	}
	else if(a>='a' && a<='z')
	{
		printf("The entered character is lowercase: '%c'",a);
	}
	return 0;
}
