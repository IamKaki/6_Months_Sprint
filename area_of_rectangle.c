#include <stdio.h>

int main()
{
	int height;
	int width;

	printf("What is the height of the rectangle?\n");
      	scanf("%d", &height);

	printf("What is the width of the rectangle?\n");
	scanf("%d", &width);
	printf("The area of the rectangle is %d.\n", height*width);

	return(0);
}
