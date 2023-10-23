/*
Write a program that will accept an integer input and will display asterisks correspondingly.

Enter integer: 4
Output:
*
* *
* * *
* * * *
//the output is a triangle-shaped set of asterisks that start with 1 then ends with 4
*/

#include<stdio.h>

main()
{
    int size, i, d;
    printf("enter set size: ");
    scanf("%d", &size);
    
    for(i = 1; i <= size; i++)
    {
        for(d = 1; d <= i; d++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
