#include<Stdio.h>

int main()
{
	int l, b, p;
	
	printf("Enter length of the rectangle: ");
	scanf("%d",&l);
	
	printf("Enter breadth of the rectangle: ");
	scanf("%d",&b);
	
	p = 2*(l+b);
	
	printf("The perimeter of the rectangle is: %d",p);
	
	return 0;
}
