#include<stdio.h>

int main()
{
	int luku1 = 0, luku2 = 0;

	do
	{
		fflush(stdin);
		printf("Tarvitsen kaksi kokonaislukua.\nAnna 1. luku: ");
		scanf_s("%d", &luku1);
		printf("Anna 2. luku: ");
		scanf_s("%d", &luku2);

	} while (luku1 <= 0 || luku2 <= 0);

	int suurempi = 0;
	int pienempi = 0;

	if (luku1 > luku2)
	{
		suurempi = luku1;
		pienempi = luku2;
	}
	else
	{
		suurempi = luku2;
		pienempi = luku1;
	}

	printf("Luku %d on suurempi ja luku %d on pienempi\n", suurempi, pienempi);

	if (suurempi%pienempi == 0)
	{
		printf("Suurempi luku ON tasan jaollinen pienemmalla!\n");
	}
	else
	{
		printf("Suurempi luku EI OLE tasan jaollinen pienemmalla...\n");
	}

	return 0;
}