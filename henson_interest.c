#include<stdio.h>

main()
{
	int years, loan, time, i;
	float intr, rate, amor, total;
	
	printf("Enter loan amount: ");
	scanf("%d", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter number of years: ");
	scanf("%d", &years);
	
	years = years * 12;
	amor = loan / years;
	
	for(i = 1; i <= years; i++)
	{
		intr = loan * rate / years;
		printf("\nMonth %d amortization: P%.2f", i, amor);
		printf("\nMonth %d interest: P%.2f", i, intr);
		printf("\nTotal: P%.2f\n", amor + intr);
		loan = loan - amor;
		getch();
	}
	
}