#include<stdio.h>

int main()
{
	printf("Kaveri hyppasi makea! Paljonko pisteita tuomarit antoivat?\nLasken kokonaispisteet!\n");
	float pisteet[5];
	int pienin = 0, suurin = 0;
	int pieninIndeksi = 0, suurinIndeksi = 0;
	float pisteetYhteensa = 0;

	for (int i = 0; i < 5; i++)
	{
			printf("Anna %d. tuomarin pisteet (0.5 pisteen tarkkuudella!): ", i + 1);
			scanf_s("%f", &pisteet[i]);

			if (i == 0)
			{
				pienin = suurin = pisteet[i];
				pieninIndeksi = suurinIndeksi = i;
			}
			else if (pisteet[i] < pienin)
			{
				pienin = pisteet[i];
				pieninIndeksi = i;
			}
			else if (pisteet[i] > suurin)
			{
				suurin = pisteet[i];
				suurinIndeksi = i;
			}
	}

	printf("Kokonaispisteista (");

	for (int i = 0; i < 5; i++)
	{
		if (i > 0) printf(", ");
		printf("%.1f", pisteet[i]);
	}

	printf(")\nsaatiin lopulliset pisteet (");

	int temp = 0;

	for (int i = 0; i < 5; i++)
	{
		if (i != suurinIndeksi && i != pieninIndeksi)
		{
			if (i > temp) printf(", ");
			printf("%.1f", pisteet[i]);

			pisteetYhteensa += pisteet[i];
		}
		else if(i == 0) temp++;
	}

	printf(")\neli yhteensa %.1f pistetta!", pisteetYhteensa);

	return 0;
}