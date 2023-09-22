#include <stdio.h>

int main()
{
	char myName[] = "Angela Sol Henson";
	int myAge = 19;
	
	// char myList[] = "Grocery List";
	float item1 = 100.25;
	float item2 = 100.50;
	float item3 = 59.75;
	float item4 = 65.25;
	float item5 = 105.90;
	
	printf(" Name: %s", myName);
	printf("\n Age: %d", myAge);
	
	printf("\n\n Grocery List:");
	
	printf("\n\n 2 Pilot G-2 Pens %.2f", item1);
	printf("\n 3 Samyang Buldak Cheese %.2f", item2);
	printf("\n 1 Nivea Sensitive Face Wash %.2f", item3);
	printf("\n 1 Celeteque Facial Moisturizer %.2f", item4);
	printf("\n 1 Calbee Wasabi Chips %.2f", item5);
}
