#include<stdio.h>

main()
{
	int n1,n2,choice;
	printf("Enter first integer: ");
	scanf("%d",&n1);
	printf("Enter second integer: ");
	scanf("%d",&n2);
	printf("MENU\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("Enter choice: ");
	scanf("%d",&choice);
	if (choice == 1)
		printf("The sum of %d and %d is %d.",n1,n2,n1 + n2);
	if (choice == 2)
		printf("The difference of %d and %d is %d",n1,n2,n1 - n2);
	if (choice == 3)
		printf("The product of %d and %d is %d",n1,n2,n1 * n2);
	if (choice == 4)
		printf("The quotient of %d and %d is %d",n1,n2,n1 / n2);
}