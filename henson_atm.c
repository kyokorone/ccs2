#include<stdio.h>
#include<conio.h>

void main()
{
	
	int choice;
	float balance;

	// MENU
	balance = 0.00;
	printf("[1] Deposit\n[2] Withdraw\n[3] Balance Inquiry\n[4] Fast Cash\n[5] Exit\n\nENTER CHOICE: ");

	
	switch(choice)
	{
		case 1: balance = deposit(balance); break;
		case 2: balance = withdraw(balance); break;
		// case 3: balance = inquiry(balance); break;
		case 4: balance = fastcash(balance); break;
		// case 5: exit;
	}
	if (choice != 5){
	   printf("Your balance is P%d.", balance);
	   }
}
