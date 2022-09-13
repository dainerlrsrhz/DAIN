#include <stdio.h>

int main(void)
{
	int result;
	int num1, num2;
	printf("Input two integrals:");
	scanf("%d %d", &num1, &num2);
	result = num1 & num2;
	printf("%d & %d = %d\n", num1, num2, result);
	result = num1 | num2;
	printf("%d | %d = %d\n", num1, num2, result);
	result = num1 ^ num2;
	printf("%d ^ %d = %d\n", num1, num2, result);

	return 0;
}
