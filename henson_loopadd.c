#include<stdio.h>

main()
{
	int int1, int2;
	printf("how many times will you hit? ");
	scanf(" %d", &num);
	i = num;
	
	while (i >= 1)
	{
		printf("hit %d\n", i);
		--i;
	}
}