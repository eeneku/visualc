#include<stdio.h>

float alennettuHinta(float hinta, float alennusprosentti);

int main()
{
	float hinta = 0.0, alennusprosentti = 0.0;

	printf("Anna hinta: ");
	scanf_s("%f", &hinta);

	printf("Anna alennusprosentti: ");
	scanf_s("%f", &alennusprosentti);

	printf("Alennettu hinta on %.2f euroa\n", alennettuHinta(hinta, alennusprosentti));

	return 0;
}

float alennettuHinta(float hinta, float alennusprosentti)
{
	return hinta * ((100 - alennusprosentti) / 100);
}