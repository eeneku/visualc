#include<stdio.h>

int main()
{
	int kertoja = 0, kertotaulu = 1, syote = 0, oikein = 0;

	printf("Anna kertoja (1-10), niin kyselen sen kertotaulun. He.\n");
	do
	{ 
		scanf_s("%d", &kertoja);
	} while (kertoja < 1 || kertoja > 10);

	while (kertotaulu <= 10)
	{
		printf("Paljonko on %d * %d? ", kertoja, kertotaulu);
		scanf_s("%d", &syote);

		if (syote == kertoja*kertotaulu) oikein++;

		kertotaulu++;
	}

	printf("\nSait %d/10!\n\n", oikein);

	if (oikein < 4) printf("Noo ois se paremminkin voinu menna..\n");
	else if (oikein > 7) printf("No sehan meni hyvin!\n");
	else printf("Ihan hyva suoritus.\n");

	return 0;
}