#include<stdio.h>

int main()
{
	int i,n,j;
	
	printf("Enter the range upto: ");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		int c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			printf("\nThe prime numbers are: %d",i);
		}
	}
	return 0;
}
