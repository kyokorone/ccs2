 #include <stdio.h>

main()
{
	int integer1, integer2, dif, sum, quo, re;

	printf("Enter two intergers: "); // input
	scanf("%d%d", &integer1, &integer2); // integers stored
	
	// equations
	dif = integer1 - integer2;
	sum = integer1 + integer2;
	quo = integer1 * integer2;
	re = integer1 % integer2;
	
	//outputs
	printf("Difference: %d",dif);
	printf("\nSum: %d",sum);
	printf("\nQuotient: %d",quo);
	printf("\nRemainder after dividing: %d",re);
}