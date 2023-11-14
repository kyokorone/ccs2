#include<stdio.h>
#include<conio.h>

void main()
{
	
	int choice, choice4;
	float balance, deposit, withdraw, fastcash;

	// MENU
	balance = 0.00;
	   printf("A N G E L A ' S  A T M\n\n");
	printf("[1] Deposit\n[2] Withdraw\n[3] Balance Inquiry\n[4] Fast Cash\n[5] Exit\n\nENTER CHOICE: ");
	scanf("%d", &choice);
	printf("\--------------------------------");

	switch(choice)
	{
		case 1:
			printf("\nDEPOSIT");
			printf("\nInput amount to deposit: P");
			scanf("%f", &deposit);
			balance += deposit;
			printf("You deposited P%.2f.", balance);
			break;
		case 2:
			printf("\nWITHDRAW");
			printf("\nInput amount to withdraw: ");
			scanf("%f", &withdraw);
			balance -= withdraw;
			printf("You deposited P%.2f.", balance);
			break;
		// case 3: balance = inquiry(balance); break;
		case 4: printf("\nFASTCASH\n");
			printf("[1] 1000\n[2] 500\n[3] 200\n[4] 100\n[5] 50\n\Select an amount to withdraw: ");
			scanf("%d", &choice4);
			switch(choice4)
			{
				case 1: printf("You withdrew P1000"); balance -= 1000;
					break;
				case 2: printf("You withdrew P500"); balance -= 500;
					break;
				case 3: printf("You withdrew P200"); balance -= 200;
					break;
				case 4: printf("You withdrew P100"); balance -= 100;
					break;
				case 5: printf("You withdrew P50"); balance -= 50;
					break;
			}
		// case 5: exit;
	}
	
	if (choice != 5){
	   printf("\nYour balance is P%d.", balance);
	   }

}
