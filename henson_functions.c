#include<stdio.h>

void add(int num1,int num2);
void subtract(int num1,int num2);
void multiply(int num1,int num2);
void divide(int num1,int num2);

void main()
{
	int num1, num2;
	
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	
	printf("Adding: ");
	add(num1,num2);
	
	printf("\nSubtracting: ");
	subtract(num1,num2);
	
	printf("\nMultiplying: ");
	multiply(num1,num2);
	
	printf("\nDividing: ");
	divide(num1,num2);
}

void add(int num1,int num2){
	printf("%d + %d = %d", num1, num2, num1+num2);
}

void subtract(int num1,int num2){
	if(num1 > num2)
		printf("%d - %d = %d", num1, num2, num1-num2);
	else
		printf("%d - %d = %d", num2, num1, num2-num1);
}

void multiply(int num1,int num2){
	printf("%d * %d = %d", num1, num2, num1*num2);
}

void divide(int num1,int num2){
	if(num1 > num2)
		printf("%d / %d = %d", num1, num2, num1/num2);
	else
		printf("%d / %d = %d", num2, num1, num2/num1);
}
