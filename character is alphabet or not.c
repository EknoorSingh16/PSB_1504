#include<stdio.h>

int main()
{
	char alpha;
	
	printf("Enter any character: ");
	scanf("%c",&alpha);
	
	if((alpha>='a' && alpha<='z') || (alpha>='A' && alpha<='Z'))
	{
		printf("The character entered is a alphabet");
	}
	else
	{
		printf("The character entered is not a alphabet");
	}
	return 0;
}
