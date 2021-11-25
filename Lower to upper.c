#include<stdio.h>

int main()
{
	char upr, lwr;
	int ascii;
	
	printf("Enter the lower case character: ");
	scanf("%c",&lwr);
	ascii = lwr - 32;
	printf("%c in upper case is: %c",lwr, ascii);
	
	return 0;
}
