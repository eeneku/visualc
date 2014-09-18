#include<stdio.h>

int lukujaTaulukossa(int taulukko[], int koko, int luku);

int main()
{
	int taulukko[] = { 1, 2, 4, 5, 9, 2, 7, 5, 6, 3, 2, 5, 3, 6, 4, 3, 2, 5, 3, 8};
	int koko = 20, luku = 4;

	printf("Lukua %d loytyy taulukosta %d kappaletta!\n", luku, lukujaTaulukossa(taulukko, koko, luku));

	return 0;
}

int lukujaTaulukossa(int taulukko[], int koko, int luku)
{
	int luvunLkm = 0;
	for (int i = 0; i < koko; i++)
	{
		if (taulukko[i] == luku) luvunLkm++;
	}

	return luvunLkm;
}