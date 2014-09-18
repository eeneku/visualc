#include<stdio.h>

void pintaAla(int pituus, int leveys);

int main()
{
	int pituus = 0, leveys = 0;

	printf("Anna huoneen pituus ja leveys metreina. Lasken sen pinta-alan\nAnna huoneen pituus: ");
	scanf_s("%d", &pituus);

	printf("Ja huoneen leveys: ");
	scanf_s("%d", &leveys);

	pintaAla(pituus, leveys);

	return 0;
}

void pintaAla(int pituus, int leveys)
{
	printf("\nHuoneen %d m * %d m pinta-ala on %d m^2\n", pituus, leveys, pituus*leveys);
}