#include<stdio.h>

int main()
{
	int luku = 0;
	float summa = 0;
	float keskiarvo = 0;
	
	printf("Tarvitsen viisi kokonaislukua. Tulostan niiden summan ja keskiarvon!\n");

	for (int i = 0; i < 5; i++)
	{
		printf("Anna %d. luku: ", i+1);

		scanf_s("%d", &luku);
		summa += luku;
	}

	keskiarvo = summa / 5;

	printf("Lukujen summa on %.2f ja keskiarvo %.2f\n", summa, keskiarvo);

	return 0;
}