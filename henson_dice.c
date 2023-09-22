#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
/*Dice roll game. Create a program that simulates a dice rolling game.
Instructions:
Best of 5 rolls (for both user and computer). The program should keep and display a tally of the winner 
of each roll (no point for tie). Each roll requires 2 six-sided dice (use rand( ) % 6 + 1 to simulate the six-sided die roll).
At the end of the 5 rolls, program will display the winner and the score (no winner if it's a tie).*/

int main()
{
	int dice1, dice2, dice3, dice4;
	char ready;
	srand(time(0));
	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;
	dice3 = rand() % 6 + 1;
	dice4 = rand() % 6 + 1;
	
	printf("Dice Rolling Game! Ready? (Y/N) ");
	scanf("%c", &ready);
	
    if (ready == 'Y' || ready == 'y')
		{
			printf("\nR O U N D  O N E \n\nRoll for computer:");
			printf("\n%d, %d", dice1, dice2);
			printf("\nTotal: %d", dice1+dice2);
			getch();
			printf("\n\nYour turn!\n");
			getch();
			printf("\nRoll for user:");
			printf("\n%d, %d", dice3, dice4);
			printf("\nTotal: %d", dice3+dice4);
		}
		
    else if (ready == 'N' || ready == 'n')
    	{
    		printf("\nSee you next time!");
		}


}