#include<stdio.h>

int main()
{
	int n,reversed=0,remainder,original;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	original=n;
	
	// reversed number value is stored in a reversed variable
	while (n != 0)
	{
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /=10;
	}
	
	//the number is palindrome if original and reversed are equal
	if(original == reversed)
	{
		printf("The %d is palindrome",original);
	}
	else
	{
		printf("The %d is not a palindrome",original);
	}
	return 0;
}
