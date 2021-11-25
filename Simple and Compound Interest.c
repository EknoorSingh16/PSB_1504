	#include<Stdio.h>
#include<math.h>

int main()	
{
	float p,t,r,s,c;
	printf("Enter the principal amount p: ");
	scanf("%f",&p);
	printf("Enter the time t: ");
	scanf("%f",&t);
	printf("Enter the rate of intrest r: ");
	scanf("%f",&r);
	
	s=(p*t*r)/100;
	printf("\nSimple intrest = %0.2f",s);
	c=p*(pow(1+r/100,t)-1);
	printf("\nCompound intrest =  %0.2f",c);
	return 0;
	
}
