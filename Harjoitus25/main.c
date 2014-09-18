#include<stdio.h>

float keskiarvo(float taulukko[], int koko);

int main()
{
	int koko = 5;
	float taulukko[] = { 10, 5, 25, 1, 30 };

	printf("Lukujen keskiarvo on %.2f\n", keskiarvo(taulukko, koko));

	return 0;
}

float keskiarvo(float taulukko[], int koko)
{
	float summa = 0.0;

	for (int i = 0; i < koko; i++)
	{
		summa += taulukko[i];
	}

	return summa / koko;
}