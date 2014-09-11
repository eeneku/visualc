#include<stdio.h>

int main()
{
	int luku = 0;

	do
	{
		printf("Anna kokonaisluku väliltä 1-5:\n");
		scanf_s("%d", &luku);
	} while (luku < 1 || luku > 5);

	switch (luku)
	{
	case 1:
		printf("Lukusi on yksi");
		break;
	case 2:
		printf("Lukusi on kaksi");
		break;
	case 3:
		printf("Lukusi on kolme");
		break;
	case 4:
		printf("Lukusi on nelja");
		break;
	case 5:
		printf("Lukusi on viisi");
		break;
	default:
		printf("Oho..");
		break;
	}

	printf("\n");

	return 0;
}