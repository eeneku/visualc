#include<stdio.h>

int main()
{
	int summa = 0;
	int taulukko[5];

	printf("Alkiot {");

	for (int i = 0; i < 5; i++)
	{
		taulukko[i] = i;
		summa += i;
		if (i > 0) printf(", ");

		printf("%d", taulukko[i]);
	}

	printf("}\n\nAlkioiden summa: %d\n", summa);
	return 0;
}