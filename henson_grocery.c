#include <stdio.h>

int main()
{
	int quantity1, quantity2, quantity3, quantity4, quantity5;
	float price1, price2, price3, price4, price5, money, total;
	
	printf("Enter quantity for Pilot G-2 Pens: ");
	scanf("%d", &quantity1);
	printf("Enter price for Pilot G-2 Pens: ");
	scanf("%f", &price1);
	
	printf("\nEnter quantity for Samyang Buldak Cheese: ");
	scanf("%d", &quantity2);
	printf("Enter price for Samyang Buldak Cheese: ");
	scanf("%f", &price2);

	printf("\nEnter quantity for Nivea Face Wash: ");
	scanf("%d", &quantity3);
	printf("Enter price for Nivea Face Wash: ");
	scanf("%f", &price3);
	
	printf("\nEnter quantity for Celeteque Facial Moisturizer: ");
	scanf("%d", &quantity4);
	printf("Enter price for Celeteque Facial Moisturizer: ");
	scanf("%f", &price4);
	
	printf("\nEnter quantity for Calbee Wasabi Chips: ");
	scanf("%d", &quantity5);
	printf("Enter price for Calbee Wasabi Chips: ");
	scanf("%f", &price5);
	
	
	printf("\nTotals: ");
	printf("\nPilot G-2 Pens: %.2f", quantity1*price1);
	printf("\nSamyang Buldak Cheese: %.2f", quantity2*price2);
	printf("\nNivea Face Wash: %.2f", quantity3*price3);
	printf("\nCeleteque Facial Moisturizer: %.2f", quantity4*price4);
	printf("\nCalbee Wasabi Chips: %.2f", quantity5*price5);
	
	total = (quantity1*price1)+(quantity2*price2)+(quantity3*price3)+(quantity4*price4)+(quantity5*price5);
	
	printf("\n\nGrand Total: %.2f", total);
	
	printf("\nMoney Received: ");
	scanf("%f", &money);
	printf("Change: %.2f", money - total);

}
