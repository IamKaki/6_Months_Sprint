#include <stdio.h>
int main ()
{
	int r;
	
	printf("What's the radius of the cylinder?\n");
	scanf("%d", &r);

	int h;
	printf("What's the height of the cylinder?\n");
	scanf("%d", &h);

	printf("The volume is %f.\n", 3.14*r*r*h);

	return(0);
}
       	
