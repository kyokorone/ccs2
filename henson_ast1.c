/*This activity will require the use of loop/s within a loop.
Note: you can choose which of the 3 loops you will use. I do encourage trying out the other loops.

Write a program that will accept an integer input and will display asterisks correspondingly.

Enter integer: 5
Output:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
//the output is a 5 x 5 set of asterisks

No need for list of errors and corrections. Upload your .C file only.

*/

#include<stdio.h>

main()
{
	int size, i, d;
	printf("enter set size: ");
	scanf("%d", &size);
	
	for(i = 1; i < size; i)
	{
		for(d = 0; d < size; d + 1)
		{
			printf("* ");
		}
		printf("\n");
	}
}

