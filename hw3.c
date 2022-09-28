#include<stdio.h>

int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int k = i; k < 4; k++)
			printf(" ");
		for (int l = 0; l <=(i * 2); l++)
			printf("*");
		
		printf("\n");
	}

	return 0;
}