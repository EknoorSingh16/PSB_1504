#include<Stdio.h>

int main()
{
	char alpha;
	
	printf("Enter any alphabet : ");
	scanf("%c",&alpha);
	
	if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u' || alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U')
	{
		printf("The entered alphabet is a vowel");
	}
	else if((alpha>='a' && alpha<='z') || (alpha>='A' && alpha<='Z'))
	{
		printf("The entered alphabet is a consonant");
	}
	else
	{
		printf("ERROR!! The entered value: %c is not an alphabet",alpha);
	}
	return 0;
}
