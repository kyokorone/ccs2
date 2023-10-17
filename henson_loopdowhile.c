#include<stdio.h>

main()
{
	int num1, num2, small, large, sum=0, i;
	printf("enter first number: ");
	scanf("%d", &num1);
	printf("enter second number: ");
	scanf("%d", &num2);
	
	if (num1 > num2)
	{
		small = num2;
		large = num1;
	}
	
	else
	{
		small = num1;
		large = num2;
	}
	
	i = small;
	
	do {
		printf(" %d", i);
		i++;
	}while (i <= large);
	
	printf("\n"); // even

	i = small;
	
	do{
		if(i % 2 == 0)
		{
			printf(" %d", i);
			sum = sum+i;
		}
		i++;
	}while (i <= large);
	
	printf("\n sum is %d", sum);
		
}
