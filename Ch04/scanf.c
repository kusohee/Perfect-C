#define _CRT_SECURE_NO_WARINGS 

#include <stdio.h>

int main(void)
{
	int year = 0;
	printf("����� ���г⵵��? ");
	scanf_s("%d", &year);
	printf("���г⵵: %d\n\n", year);

	int month, day;
	printf("����� ���������? ");
	scanf_s("%d - %d - %d", &year, &month, &day);
	printf("�������: %d-%d-%d\n", year, month, day);

	return 0;
}