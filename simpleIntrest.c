#include <stdio.h>
int main()
{
	int p;
	float r;
	int t;

	printf("What is the principle amount?\n");
	scanf("%d", &p);

	printf("What's the percentage rate of interest?\n");
	scanf("%f", &r);

	printf("What's the time period for repayment?\n");
	scanf("%d", &t);

	printf("Then the simple interest for your loan is %f\n",(p*(1 + r*t)) );	  
	return(0);
}
