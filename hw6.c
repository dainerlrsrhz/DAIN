#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int i;
	int arr[5];

	printf("please input five numbers: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	printf("odd number: ");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d ", arr[i]);
	}
	printf("\n");

	printf("even number: ");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}
	return 0;
}