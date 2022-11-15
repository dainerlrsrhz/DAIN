#include<stdio.h>
#include<math.h>

void dvtn(int* param)
{
	int i;
	double sum = 0; //전체 합
	double exp = 0;

	for (i = 0; i < 5; i++)
		sum += param[i];

	double ave = sum / 5; //평균

	for (i = 0; i < 5; i++)
		exp += pow((param[i]-ave), 2);

	double dev = sqrt((exp / 5));

	printf("Standard Deviation = %f", dev);
}

int main(void)
{
	int arr[5];
	int i;
	printf("Enter 5 real numbers: ");
	for (i = 0; i < 5; i++)
		scanf_s("%d", &arr[i]);
	dvtn(arr);

	return 0;

}