#include<stdio.h>
#include<stdlib.h>

#define OIKEALUKU 12

int main()
{
	srand(time(NULL));

	int luku = 0;
	int oikealuku = rand() % 21;

	do
	{
		printf("Arvaapas luku valilta 1-20!\n");

		scanf_s("%d", &luku);

		if (luku < oikealuku)
		{
			printf("Eip! Luku on suurempi.\n");
		}
		else if (luku > oikealuku)
		{
			printf("Eip! Luku on pienempi.\n");
		}
	} while (luku != oikealuku);

	printf("No menihan se oikein!\n");

	return 0;
}