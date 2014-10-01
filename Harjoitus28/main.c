#include <stdio.h>
#include <string.h>

#define SANOJA 4

int main()
{
	char sanakirja[SANOJA][2][10] = {
			{ "horse", "hevonen" },
			{ "dog", "koira" },
			{ "mouse", "hiiri" },
			{ "bear", "karhu" } };

	char sana[10];

	printf("Olen sanakirja! Anna englanninkielinen sana, esimerkiksi horse, dog, mouse tai bear, ja kerron mikä se on suomeksi! Ihan totta!\n");

	scanf_s("%s", &sana, 10);

	int loyty = -1;

	for (int i = 0; i < SANOJA; i++)
	{
		if (strcmp(sana, sanakirja[i][0]) == 0) loyty = i;
	}

	if (loyty >= 0)
		printf("Loyty! Sana %s on suomeksi %s! Tietenkin!\n", sana, sanakirja[loyty][1]);
	else
		printf("Huono sana... Ei loytynyt kaannosta meidan sanakirjasta\n");

	return 0;
}