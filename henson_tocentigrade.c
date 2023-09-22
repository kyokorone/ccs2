#include<stdio.h>

main()
{
	float centigrade, fahrenheit;
	printf("Input fahrenheit temperature: ");
	scanf("%f", &fahrenheit);
	
	centigrade = ((fahrenheit - 32) * 5.0)/9.0;
	
	printf("Fahrenheit to Centigrade temperature: %.2f", centigrade);
}