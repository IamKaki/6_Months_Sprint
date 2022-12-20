#include <stdio.h>

int main ()
{
	int age;

	printf("what is you age?\n");
	scanf("%d", &age);

	if (age>=18){
		printf("You are eligible to drive\n");
	}
	else if(age>=15){
		printf("You are not eligible to drive but we can get u a toy car>\n");
	}
	else{
		printf("Sorry u are a kid!\n");
	}
	return(0);
}
