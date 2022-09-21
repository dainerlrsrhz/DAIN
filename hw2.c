#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	double num1;
	double num2;
	const double mile = 1.609;
	printf("Please enter kilometers:");
	scanf_s("%lf", &num1);
	num2 = num1 / mile;
	printf("%.1f is equal to %.1f miles", num1, num2);

	return 0;
}