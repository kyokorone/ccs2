#include<stdio.h>
/*
Write a program that will ask for an integer input (1 - 9999). Your program will convert the inputted integer into its 
corresponding word format in English. See examples below:

Example 1:

Input number: 2481

Output: two thousand four hundred eighty one

Example 2:

Input number: 616

Output: six hundred sixteen

Example 3:

Input number: 30

Output: thirty

- Make sure to trap your input. Any integer input below 1 or above 9999 is an invalid input. In case of an invalid input,
 the program will display an error message and will exit the program.

-Submit your .C file.

- Find a way to be able to extract each digit according to its place value.

- VERY IMPORTANT: THE SOLUTION DOES NOT USE 9999 IF-STATEMENTS!

- Be careful on the numbers from 10 - 19.
*/

main()
{
	int num, ones, tens, hundreds, thousandths;
	
	printf("Input number: ");
	scanf("%d,", &num);
	
	thousandths = num / 1000;
	hundreds = (num % 1000) / 100;
	tens = ((num % 1000) % 100) / 10;
	ones = ((num % 1000) % 100) % 10;
	
	if (thousandths != 0){
		if (thousandths == 1) printf("one thousand ");
		if (thousandths == 2) printf("two thousand ");	
		if (thousandths == 3) printf("three thousand ");
		if (thousandths == 4) printf("four thousand ");
		if (thousandths == 5) printf("five thousand ");
		if (thousandths == 6) printf("six thousand ");		
		if (thousandths == 7) printf("seven thousand ");
		if (thousandths == 8) printf("eight thousand ");
		if (thousandths == 9) printf("nine thousand ");
	}
		
	if (hundreds != 0){
		if (hundreds == 1) printf("one hundred ");
		if (hundreds == 2) printf("two hundred ");	
		if (hundreds == 3) printf("three hundred ");
		if (hundreds == 4) printf("four hundred ");
		if (hundreds == 5) printf("five hundred ");
		if (hundreds == 6) printf("six hundred ");		
		if (hundreds == 7) printf("seven hundred ");
		if (hundreds == 8) printf("eight hundred ");
		if (hundreds == 9) printf("nine hundred ");
	}
	
	if (tens != 0){
		if (tens == 1) printf("ten ");
		if (tens == 2) printf("twenty ");	
		if (tens == 3) printf("thirty ");
		if (tens == 4) printf("fourty ");
		if (tens == 5) printf("fifty ");
		if (tens == 6) printf("sixty ");
		if (tens == 7) printf("seventy ");
		if (tens == 8) printf("eighty ");
		if (tens == 9) printf("ninety ");
	}
	
	if (ones != 0){
		if (ones == 1) printf("one ");
		if (ones == 2) printf("two ");	
		if (ones == 3) printf("three ");
		if (ones == 4) printf("four ");
		if (ones == 5) printf("five ");
		if (ones == 6) printf("six ");
		if (ones == 7) printf("seven ");
		if (ones == 8) printf("eight ");
		if (ones == 9) printf("nine ");
	}
}
