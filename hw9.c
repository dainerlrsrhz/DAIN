#define _CRT_SECURE_NO_WARNINGS_
#include<stdio.h>
#include<string.h>

int convToCap(int s)
{
	const int diff = 'a' - 'A';
	if (s >= 'A' && s <= 'Z')
		return s + diff;
	else if (s >= 'a' && s <= 'z')
		return s - diff;
}

int main(void)
{
	char str[50];
	int i;

	printf("input> ");
	fgets(str, sizeof(str), stdin);

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i]=convToCap(str[i]);
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i]= convToCap(str[i]);
	}
	printf("Output> %s", str);

	return 0;
}