#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows of the floyds triangle: ");
	scanf("%d",&n);
	
	
	int i,j,k=1;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %2d",k++);
		}
		printf("\n");
	}
}
