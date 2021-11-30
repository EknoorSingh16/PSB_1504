#include<stdio.h>

int main()
{
	char alphabet;
	
	printf("Enter any alphabet: ");
	scanf("%c",&alphabet);
	
	switch(alphabet)
	{
		case 'a':
			printf("VOWEL");
			break;
		case 'e':
			printf("IT IS A VOWEL");
			break;
		case 'i':
			printf("IT IS A VOWEL");
			break;
		case 'o':
			printf("IT IS A VOWEL");
			break;
		case 'u':
			printf("IT IS A VOWEL");
			break;
		case 'A':
			printf("IT IS A VOWEL");
			break;
		case 'E':
			printf("IT IS A VOWEL");
			break;
		case 'I':
			printf("IT IS A VOWEL");
			break;
		case 'O':
			printf("IT IS A VOWEL");
			break;
		case 'U':
			printf("IT IS A VOWEL");
			break;
		default:
			printf("IT IS A CONSANANT");
			
	}
	return 0;
}
