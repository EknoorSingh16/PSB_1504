#include<stdio.h>

int main()
{
	double no, divisor, remainder;
	
	printf("Enter the no: ");
	scanf("%lf",&no);
	
	printf("Enter the divisor: ");
	scanf("%lf",&divisor);
	
	//for getting remainder
	while (no>=divisor){
		no = no - divisor;
	}
	
	remainder = no;
	
	printf("The remainder is: %.2lf",remainder);
	
	return 0;
}
