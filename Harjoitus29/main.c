#include <stdio.h>

#define MERKIT 25
#define PELIT 3

struct Mobiilipeli
{
	char nimi[MERKIT];
	char julkaisija[MERKIT];
	int hinta;
};

void tulostaTiedot(struct Mobiilipeli peli);
void vertailePeleja(struct Mobiilipeli peli1, struct Mobiilipeli peli2);

int main()
{
	struct Mobiilipeli angrybirds = { "angrybirds", "activision", 200 };
	struct Mobiilipeli commando = { "commando", "electronic arts", 201 };
	struct Mobiilipeli pelit[PELIT];

	vertailePeleja(angrybirds, commando);

	printf("No niin, kysyn %d:n pelin tiedot ja tulostan ne.", PELIT);

	for (int i = 0; i < PELIT; i++)
	{
		fflush(stdin);
		printf("\n\n");
		printf("Syota %d:n pelin nimi: ", i+1);
		gets_s(pelit[i].nimi, MERKIT);

		printf("Syota %d:n pelin julkaisija: ", i + 1);
		gets_s(pelit[i].julkaisija, MERKIT);

		printf("Syota %d:n pelin hinta: ", i + 1);
		scanf_s("%d", &pelit[i].hinta);
	}

	for (int i = 0; i < PELIT; i++)
	{
		tulostaTiedot(pelit[i]);
	}

	return 0;
}

void tulostaTiedot(struct Mobiilipeli peli)
{
	printf("\nNimi: %s\nJulkaisija: %s\nHinta: %d euroa\n", peli.nimi, peli.julkaisija, peli.hinta);
}

void vertailePeleja(struct Mobiilipeli peli1, struct Mobiilipeli peli2)
{
	struct Mobiilipeli * halvempi;

	if (peli1.hinta < peli2.hinta) halvempi = &peli1;
	else halvempi = &peli2;

	tulostaTiedot(*halvempi);
}