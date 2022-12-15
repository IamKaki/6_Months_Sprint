#include <stdio.h>

int main ()
{
	int a;
	printf("Input your number to check if it's devisible by 97\n");
	scanf("%d", &a);

	printf("Your answer is %d.\n", a%97);
	return(0);
}
