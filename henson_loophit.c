#include<stdio.h>

main()
{
	int i, num;
	printf("how many times will you hit? ");
	scanf(" %d", &num);
	i = num;
	
	while (i >= 1)
	{
		printf("hit %d\n", i);
		--i;
	}
}