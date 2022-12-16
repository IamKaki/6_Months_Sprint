#include <stdio.h>

int main ()
{
	int age;
	
	printf("How old are you?\n");
	scanf("%d", &age);

	if (age>18){
		printf("You are eligible to drive\n");
	}

	else{
		printf("Sorry. You are under age:(\n");
	}

	return (0);
}
