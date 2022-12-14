#include <stdio.h>

int main ()
{
	int height;
	int width;

	printf("What's the height?\n");
	scanf("%d", &height);

	printf("What's the width?\n");
	scanf("%d", &width);

	printf("The area is %d.\n", height*width);
       	return(0);
}	
