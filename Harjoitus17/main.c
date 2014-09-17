#include<stdio.h>

int main()
{
	int korkeus = 0, leveys = 0;

	printf("Piirran ruudukon!\n");

	do
	{
		printf("Anna ruudukon korkeus: ");
		scanf_s("%d", &korkeus);

		printf("Ja leveys: ");
		scanf_s("%d", &leveys);

	} while (leveys <= 0 || korkeus <= 0);

	printf("\n");

	for (int y = 0; y < korkeus; y++)
	{
		for (int x = 0; x < leveys; x++)
		{
			printf("#");
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}