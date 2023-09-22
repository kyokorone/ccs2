#include<stdio.h>
#define pi 3.1416

main()
{
	float r, area, circumference, diameter;
	int choice;
	printf("Input the radius of a circle: ");
	scanf("%f", &r);
	printf("\nWhat would you like to solve?");
	printf("\n1. The area of a circle.");
	printf("\n2. The circumference of a circle.");
	printf("\n3. The diameter of a circle.");
	printf("\n\nInput 1, 2, or 3: ");
	scanf("%d", &choice);
	
	area = pi*(r*r);
	circumference = (2*pi)*r;
	diameter = 2*r;
	
	if (choice == 1)
		printf("\nThe area of the circle is %.2f", area);
	if (choice == 2)
		printf("\nThe circumference of the circle is %.2f", circumference);
	if (choice == 3)
		printf("\nThe diameter of the circle is %.2f", diameter);
}