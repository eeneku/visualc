#include<stdio.h>

int main()
{
	int montako = 0;
	int luku = 0;
	float summa = 0;
	float keskiarvo = 0;
	
	printf("Lasken lukujen summan ja keskiarvon! Montako lukua kysellaan?\n");

	scanf_s("%d", &montako);

	printf("Okei, nyt mennaan!\n\n");

	for (int i = 0; i < montako; i++)
	{
		printf("Anna %d. luku: ", i + 1);

		scanf_s("%d", &luku);
		summa += luku;
	}

	keskiarvo = summa / montako;

	printf("Lukujen summa on %.2f ja keskiarvo %.2f\n", summa, keskiarvo);

	return 0;
}