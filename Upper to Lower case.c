#include<stdio.h>

int main()
{
	char upr, lwr;
	int ascii;
	
	//upper case character to lower
	printf("Enter the upper case character: ");
	scanf("%c",&upr);
	ascii = upr + 32;
	printf("%c in lower case is: %c", upr, ascii);
	
	return 0;
	
}
