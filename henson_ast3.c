/*
Enter integer: 5
Output:
* * * * *
*       *
*       *
*       *
* * * * *
//the output is a hollow-squared set of asterisks
*/

#include<stdio.h>

main()
{
    int size, row, col;
    printf("enter set size: ");
    scanf("%d", &size);
    
    for(row = 0; row < size; row++) // rows
    {
        for(col = 0; col < size; col++) // column
        {
        	if (row == 0 || col == 0 || row == size - 1 || col == size - 1){
				printf("* ");
			}
			else{
				printf("  ");
			}	
        }
        printf("\n");
    }
}
