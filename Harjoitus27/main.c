#include <stdio.h>

int main()
{
	char etunimi[25];
	char sukunimi[25];
	float tyotunnit = 0, tuntipalkka = 0, veroprosentti = 0;

	printf("Anna etunimesi: ");
	scanf_s("%s", &etunimi, 25);

	printf("Anna sukunimesi: ");
	scanf_s("%s", &sukunimi, 25);

	printf("Anna tyotuntisi: ");
	scanf_s("%f", &tyotunnit);

	printf("Anna tuntipalkkasi: ");
	scanf_s("%f", &tuntipalkka);

	printf("Anna veroprosenttisi: ");
	scanf_s("%f", &veroprosentti);

	printf("%s %s\n", etunimi, sukunimi);
	printf("Bruttopalkkasi on %.2f euroa.\n", tyotunnit*tuntipalkka);
	printf("Nettopalkkasi on %.2f euroa.\n", (tyotunnit*tuntipalkka)*((100 - veroprosentti)/100));

	return 0;
}