#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void add(int num1,int num2);
void subtract(int num1,int num2);
void multiply(int num1,int num2);
void divide(int num1,int num2);
int menu();

int main()
{
	int num1, num2, choice;
	
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	do{
		choice = menu();
		switch(choice){
			case 1: printf("\nADDITION: ");
					add(num1,num2);
					break;
			case 2: printf("\nSUBTRACTION: ");
					subtract(num1,num2);
					break;
			case 3: printf("\nMULTIPLICATION: ");
					multiply(num1,num2);
					break;
			case 4: printf("\nDIVISION: ");
					divide(num1,num2);
					break;
			case 5: printf("\nGOODBYE!");
					getch();
					exit(1);
		}	
	}while (choice > 1 || choice < 5);

}

int menu()
{
	int choice;
	
	printf("\nMENU\n");
	printf("[1] Addition\n[2] Subtraction\n[3] Multiplication\n[4] Division\n[5] Exit\n\nENTER CHOICE: ");
	scanf("%d", &choice);
	if (choice < 1 || choice > 5)
		printf("\nERROR IN MENU SELECTION. TRY AGAIN.\n");
	else
		return (choice);
}

void add(int num1,int num2){
	printf("%d + %d = %d\n", num1, num2, num1+num2);
}

void subtract(int num1,int num2){
	if(num1 > num2)
		printf("%d - %d = %d\n", num1, num2, num1-num2);
	else
		printf("%d - %d = %d\n", num2, num1, num2-num1);
}

void multiply(int num1,int num2){
	printf("%d * %d = %d\n", num1, num2, num1*num2);
}

void divide(int num1,int num2){
	if(num1 > num2)
		printf("%d / %d = %d\n", num1, num2, num1/num2);
	else
		printf("%d / %d = %d\n", num2, num1, num2/num1);
}