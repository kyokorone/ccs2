#include<stdio.h>
#include<stdlib.h>

main()       
{
	int num, ones, tens, hundreds, thousandths;
	
	printf("Input number: ");
	scanf("%d,", &num);
	
	thousandths = num / 1000;
	hundreds = (num % 1000) / 100;
	tens = ((num % 1000) % 100) / 10;
	ones = ((num % 1000) % 100) % 10;
	
	if (num <= 0 || num > 9999){
		printf("Your input is invalid.");
    		exit(1);
		}

	switch (thousandths){
		case 1: printf("one thousand "); break;
		case 2: printf("two thousand "); break;
		case 3: printf("three thousand "); break;
		case 4: printf("four thousand "); break;
		case 5: printf("five thousand "); break;
		case 6: printf("six thousand "); break;
		case 7: printf("seven thousand "); break;
		case 8: printf("eight thousand "); break;
		case 9: printf("nine thousand "); break;
			}
		
	switch (hundreds){
		case 1: printf("one hundred "); break;
		case 2: printf("two hundred ");	 break;
		case 3: printf("three hundred "); break;
		case 4: printf("four hundred "); break;
		case 5: printf("five hundred "); break;
		case 6: printf("six hundred "); break;
		case 7: printf("seven hundred "); break;
		case 8: printf("eight hundred "); break;
		case 9: printf("nine hundred "); break;
			}
	
	switch (tens != 0){
		case 1:
			switch (0)
			{
		case 1: printf("ten "); break;
		case 2: printf("twenty "); break;
		case 3: printf("thirty "); break;
		case 4: printf("fourty "); break;
		case 5: printf("fifty "); break;
		case 6: printf("sixty "); break;
		case 7: printf("seventy "); break;
		case 8: printf("eighty "); break;
		case 9: printf("ninety "); break;
			}
		break;
		case 2:
			{
		case 1: printf("eleven "); break;
		case 2: printf("twelve "); break;
		case 3: printf("thirteen "); break;
		case 4: printf("fourteen "); break;
		case 5: printf("fifteen "); break;
		case 6: printf("sixteen "); break;
		case 7: printf("seventeen "); break;
		case 8: printf("eighteen "); break;
		case 9: printf("nineteen "); break;
				}
		}

		
	switch (ones != 0 && tens != 1){
		case 1: printf("one "); break;
		case 2: printf("two "); break;
		case 3: printf("three "); break;
		case 4: printf("four "); break;
		case 5: printf("five "); break;
		case 6: printf("six "); break;
		case 7: printf("seven "); break;
		case 8: printf("eight "); break;
		case 9: printf("nine "); break;
			}

}
