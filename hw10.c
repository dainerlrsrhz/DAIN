#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct nation
{
	char name[20];
	char country[50];
	int population;
} Nation;

int main(void)
{
	Nation arr[3];
	int i;
	printf("input three cities: \n");
	for (i = 0; i < 3; i++)
	{
		printf("Name> "); scanf("%s", arr[i].name);
		printf("Country> "); scanf("%s", arr[i].country);
		printf("Population> "); scanf("%d", &arr[i].population);
	}
	printf("Printing the three cities: \n");
	for (i = 0; i < 3; i++)
	{
		printf("%d, %s in %s with a population of %d people\n", i + 1, arr[i].name, arr[i].country, arr[i].population);
	}
	return 0;
}