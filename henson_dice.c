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
	int scoreC, scoreU;
	char ready;
	srand(time(0));
	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;
	dice3 = rand() % 6 + 1;
	dice4 = rand() % 6 + 1;
	
	printf("Dice Rolling Game! Ready? (Press Y) ");
	scanf("%c", &ready);
	
	
// ROUND ONE
	
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
			getch();
		}
		
    else if (ready == 'N' || ready == 'n')
    	{
    		printf("\nSee you next time!");
    		system("cls");
		}

	if (dice1+dice2 > dice3+dice4)
		{
			scoreC = 1;
			scoreU = 0;
			printf("\n\nComputer has won!");
			getch();
			printf("\n\nScore:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
		}
	
	if (dice1+dice2 < dice3+dice4)
		{
			scoreC = 0;
			scoreU = 1;
			printf("\n\nUser has won!");
			getch();
			printf("\n\nScore:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
		}
		
	if (dice1+dice2 == dice3+dice4)
		{
			scoreC = 0;
			scoreU = 0;
			printf("\n\nNo winner for this round.");
			getch();
			printf("\n\nScore:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
		}
	
	getch();
	printf("\n\nPress any key to go to Round 2!");
	getch();
	system("cls");
		
// ROUND TWO

	srand(time(0));
	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;
	dice3 = rand() % 6 + 1;
	dice4 = rand() % 6 + 1;
	
    if (ready == 'Y' || ready == 'y')
		{
			printf("R O U N D  T W O");
			getch();
			printf("\n\nRoll for computer:");
			printf("\n%d, %d", dice1, dice2);
			printf("\nTotal: %d", dice1+dice2);
			getch();
			printf("\n\nYour turn!\n");
			getch();
			printf("\nRoll for user:");
			printf("\n%d, %d", dice3, dice4);
			printf("\nTotal: %d", dice3+dice4);
			getch();
		}
	if (dice1+dice2 > dice3+dice4)
		{
			scoreC = scoreC+1;
			scoreU = scoreU+0;
			printf("\n\nComputer has won!");
			getch();
			printf("\n\nScore:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
		}
	
	if (dice1+dice2 < dice3+dice4)
		{
			scoreC = scoreC+0;
			scoreU = scoreU+1;
			printf("\n\nUser has won!");
			getch();
			printf("\n\nScore:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
		}
		
	if (dice1+dice2 == dice3+dice4)
		{
			scoreC = scoreC+0;
			scoreU = scoreU+0;
			printf("\n\nNo winner for this round.");
			getch();
			printf("\n\nScore:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
		}
		
	else if (ready == 'N' || ready == 'n')
    	{
    		printf("\nSee you next time!");
    		system("cls");
		}
		
	getch();
	printf("\n\nPress any key to go to Round 3!");
	getch();
	system("cls");
	

	
// ROUND THREE

	srand(time(0));
	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;
	dice3 = rand() % 6 + 1;
	dice4 = rand() % 6 + 1;
	
    if (ready == 'Y' || ready == 'y')
		{
			printf("R O U N D  T H R E E");
			getch();
			printf("\n\nRoll for computer:");
			printf("\n%d, %d", dice1, dice2);
			printf("\nTotal: %d", dice1+dice2);
			getch();
			printf("\n\nYour turn!\n");
			getch();
			printf("\nRoll for user:");
			printf("\n%d, %d", dice3, dice4);
			printf("\nTotal: %d", dice3+dice4);
			getch();
		}
	if (dice1+dice2 > dice3+dice4)
		{
			scoreC = scoreC+1;
			scoreU = scoreU+0;
			printf("\n\nComputer has won!");
			getch();
			printf("\n\nScore:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
		}
	
	if (dice1+dice2 < dice3+dice4)
		{
			scoreC = scoreC+0;
			scoreU = scoreU+1;
			printf("\n\nUser has won!");
			getch();
			printf("\n\nScore:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
		}
		
	if (dice1+dice2 == dice3+dice4)
		{
			scoreC = scoreC+0;
			scoreU = scoreU+0;
			printf("\n\nNo winner for this round.");
			getch();
			printf("\n\nScore:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
		}

	getch();
	printf("\n\nPress any key to go to Round 4!");
	getch();
	system("cls");

// ROUND FOUR

	srand(time(0));
	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;
	dice3 = rand() % 6 + 1;
	dice4 = rand() % 6 + 1;
	
    if (ready == 'Y' || ready == 'y')
		{
			printf("R O U N D  F O U R");
			getch();
			printf("\n\nRoll for computer:");
			printf("\n%d, %d", dice1, dice2);
			printf("\nTotal: %d", dice1+dice2);
			getch();
			printf("\n\nYour turn!\n");
			getch();
			printf("\nRoll for user:");
			printf("\n%d, %d", dice3, dice4);
			printf("\nTotal: %d", dice3+dice4);
			getch();
		}
	if (dice1+dice2 > dice3+dice4)
		{
			scoreC = scoreC+1;
			scoreU = scoreU+0;
			printf("\n\nComputer has won!");
			getch();
			printf("\n\nScore:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
		}
	
	if (dice1+dice2 < dice3+dice4)
		{
			scoreC = scoreC+0;
			scoreU = scoreU+1;
			printf("\n\nUser has won!");
			getch();
			printf("\n\nScore:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
		}
		
	if (dice1+dice2 == dice3+dice4)
		{
			scoreC = scoreC+0;
			scoreU = scoreU+0;
			printf("\n\nNo winner for this round.");
			getch();
			printf("\n\nScore:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
		}

	getch();
	printf("\n\nPress any key to go to Round 5!");
	getch();
	system("cls");
	
// ROUND FIVE

	srand(time(0));
	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;
	dice3 = rand() % 6 + 1;
	dice4 = rand() % 6 + 1;
	
    if (ready == 'Y' || ready == 'y')
		{
			printf("R O U N D  F I V E");
			getch();
			printf("\n\nRoll for computer:");
			printf("\n%d, %d", dice1, dice2);
			printf("\nTotal: %d", dice1+dice2);
			getch();
			printf("\n\nYour turn!\n");
			getch();
			printf("\nRoll for user:");
			printf("\n%d, %d", dice3, dice4);
			printf("\nTotal: %d", dice3+dice4);
			getch();
		}
	if (dice1+dice2 > dice3+dice4)
		{
			scoreC = scoreC+1;
			scoreU = scoreU+0;
			printf("\n\nComputer has won!");
			getch();
			printf("\n\nScore:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
		}
	
	if (dice1+dice2 < dice3+dice4)
		{
			scoreC = scoreC+0;
			scoreU = scoreU+1;
			printf("\n\nUser has won!");
			getch();
			printf("\n\nScore:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
		}
		
	if (dice1+dice2 == dice3+dice4)
		{
			scoreC = scoreC+0;
			scoreU = scoreU+0;
			printf("\n\nNo winner for this round.");
			getch();
			printf("\n\nScore:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
		}

	getch();
	printf("\n\nPress any key...!");
	getch();
	system("cls");
	
// END SCREEN

    if (ready == 'Y' || ready == 'y')
		{
			printf("T H E  E N D\n");
			getch();
		}
		
	if (scoreC > scoreU)
		{
			printf("\n\nComputer has won!");
			getch();
			printf("\n\nFinal Scores:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
			getch();
			printf("\n\nok ra na bai madala ra nag hilak.");
		}
	
	if (scoreC < scoreU)
		{
			printf("\nUser has won!");
			getch();
			printf("\n\nFinal Scores:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
			getch();
			printf("\n\nnice wan lodz! mupasar ra ka this sem, sign na ni.");
		}
		
	if (dice1+dice2 == dice3+dice4)
		{
			printf("\n\nNo one has won?");
			getch();
			printf("\n\nFinal Scores:");
			printf("\nComputer: %d\nUser: %d", scoreC, scoreU);
			getch();
			printf("\n\nluh tied lagi mo? at least you didn't lose...???'");
		}

	getch();
	printf("\n\npress any key to leave :D (luh mamiya)");

}
