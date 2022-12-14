#include <stdio.h>

int main()
{
	int h;
	int w;

	printf("What is the height of the square?\n");
	scanf("%d", &h);

	printf("What is the width of the square?\n");
	scanf("%d", &w);

	printf("The area of the square is %d.\n", h*w);

	return (0);
}
