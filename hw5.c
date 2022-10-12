#include<stdio.h>

int binary(int num)
{
	if (num >=2)
	{
		binary(num / 2);
	}
	printf("%d", num % 2);
}

int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf_s("%d", &num);
	binary(num);
	return 0;
}