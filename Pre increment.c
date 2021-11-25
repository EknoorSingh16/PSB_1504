#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter a: ");
	scanf("%d",&a);
	
	b = ++a;
	
	printf("The updated value of a is: %d",b);
	
	return 0;
}
