#include <stdio.h>

int main ()
{
	//(0°C × 9/5) + 32
	int degrees;
	printf("What are your degrees?\n");
	scanf("%d", &degrees);

	printf("Your degrees in farenheit are %d.\n", (degrees * 9/5) + 32);
        return	(0);
}
