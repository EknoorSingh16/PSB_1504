#include<stdio.h>
#include<math.h>

int main()
{
	float p, t, r, CI;
	
	printf("Enter principle amount: ");
	scanf("%f",&p);
	
	printf("Enter rate: ");
	scanf("%f",&r);
	
	printf("Enter time: ");
	scanf("%f",&t);
	
	CI = p * pow((1+r/100),t);
	
	printf("The compund interest is: %.2f",CI);
	
	return 0;
}
