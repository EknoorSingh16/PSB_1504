#include<stdio.h>
#include<math.h>

int main()
{
	float s1 ,s2 ,s3 , s4, s5, total, avg, percentage;
	
	printf("Enter marks of sub1: ");
	scanf("%f",&s1);
	
	printf("Enter marks of sub2: ");
	scanf("%f",&s2);
	
	printf("Enter marks of sub3: ");
	scanf("%f",&s3);
	
	printf("Enter marks of sub4: ");
	scanf("%f",&s4);
	
	printf("Enter marks of sub5: ");
	scanf("%f",&s5);
	
	total = s1 + s2 + s3 + s4 + s5;
	
	avg = total / 5;
	
	percentage = (total/500)*100;
	
	printf("The total of your marks is: %.2f",total);
	
	printf("\nThe avg of your marks is: %.2f",avg);
	
	printf("\nThe percentage of your marks is: %.2f",percentage);
	
	return 0; 
}
