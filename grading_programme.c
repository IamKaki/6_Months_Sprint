#include <stdio.h>

int main ()
{
	int marks;
	
	printf("What were your marks for the end year exam?\n");
	scanf("%d", &marks);

	if (marks>=90)
	{
		printf("Your grade is an A. Congrats!\n");
	}
	else if (marks>=80)
	{
		printf("Your grade is a B.\n");
	}
	else if (marks>=70)
	{
		printf("Your grade is C.\n");
	}
	else if (marks>=60)
	{
		printf("Your grade is a D. You fail.\n");
	}
	else if (marks>=50)
	{
		printf("Your grade is E. You failed bad!\n");
	}
	else{
		printf("You are below par, go back to books.\n");
	}

	return(0);
}
