#include<stdio.h>

int main()
{
	char a;
	
	printf("Enter any character: ");
	scanf("%c",&a);
	
	if((a>='a' && a<='z') || (a>='A' && a<="Z"))
	{
		printf("The entered character: %c is an alphabet",a);
	}
	else if(a>='0' && a<='9')
	{
		printf("The entered character:'%c' is an digit",a);
	}
	else
	{
		printf("The entered chracter:'%c' is an special character",a);
	}
	return 0;
}
