#include <iostream>
#include <vector>
#include <stdio.h>


int main(void)
{
	int i;
	for (i = 0; i < 2; i++)
	{
		fork();
		printf("-");
	}
	return 0;
}





















