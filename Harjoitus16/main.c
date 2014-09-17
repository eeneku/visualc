#include<stdio.h>

int main()
{
	int luku = 0;

	printf("Anna luku, niin kerron sen kertotaulun 10:een asti!\n");
	scanf_s("%d", &luku);

	for (int i = 0; i < 10; i++)
	{
		printf("%d * %d = %d\n", luku, i + 1, luku*(i + 1));
	}

	return 0;
}