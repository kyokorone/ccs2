#include<stdio.h>

main()
{
	float centigrade, fahrenheit;
	printf("Input centigrade temperature: ");
	scanf("%f", &centigrade);
	
	fahrenheit = (centigrade * 9.0/5.0) + 32;
	
	printf("Centigrade to Fahrenheit temperature: %.2f", fahrenheit);
}