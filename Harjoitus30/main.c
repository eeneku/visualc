#include <stdio.h>

void muutaSaldo(float maara);
float haeSaldo();

int main()
{
	int valinta = 0;

	do
	{
		printf("Valitse toiminto:\n1) Uusi ostos\n2) Saldo\n3) Talleta rahaa\n0) Lopeta\n");

		while (scanf_s("%d", &valinta) == 0 || valinta < 0 || valinta > 3)
		{
			fflush(stdin);
			printf("Virheellinen syote! Yrita uudestaan: ");
		}

		switch (valinta)
		{
		case 1:
		{
			float osto = 0;
			printf("\nNo, paljollako ostit? ");
			scanf_s("%f", &osto);
			printf("\n");
			muutaSaldo(osto*-1);
			break;
		}
		case 2:		
		{
			printf("\nTilisi saldo on %.2f\n\n", haeSaldo());
			break;
		}
		case 3:
		{
			float talletus = 0;
			printf("\nPaljonko tallennetaan? ");
			scanf_s("%f", &talletus);
			printf("\n");
			muutaSaldo(talletus);
			break;
		}
		default: break;
		}
	} while (valinta != 0);

	return 0;
}

void muutaSaldo(float maara)
{
	float saldo = haeSaldo();

	saldo += maara;

	FILE * tiedosto;

	fopen_s(&tiedosto, "tili.txt", "w");

	if (tiedosto != 0)
	{
		fprintf_s(tiedosto, "%f", saldo);

		fclose(tiedosto);
	}
}

float haeSaldo()
{
	float maara = 0;
	FILE * tiedosto;

	fopen_s(&tiedosto, "tili.txt", "r");

	if (tiedosto != 0)
	{
		fscanf_s(tiedosto, "%f", &maara);

		fclose(tiedosto);
	}

	return maara;
}