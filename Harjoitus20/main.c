#include<stdio.h>

int main()
{

	int tunnit[7];
	int tunnitArkena = 0;
	int tunnitViikonloppuna = 0;

	printf("Paljonko opiskelet viikon aikana (ma-pe)?\n");

	for (int i = 0; i < 7; i++)
	{
		printf("Paljonko opiskelet ");

		switch (i)
		{
		case 0: printf("maanantai"); break;
		case 1: printf("tiistai"); break;
		case 2: printf("keskiviikko"); break;
		case 3: printf("torstai"); break;
		case 4: printf("perjantai"); break;
		case 5: printf("lauantai"); break;
		case 6: printf("sunnuntai"); break;
		default: printf("waat"); break;
		}
		printf("na? ");

		scanf_s("%d", &tunnit[i]);

		if (i < 5) tunnitArkena += tunnit[i];
		else tunnitViikonloppuna += tunnit[i];
	}

	printf("Keskimaarainen opiskeluaikasi: %d/paiva\n", (tunnitArkena+tunnitViikonloppuna) / 7);
	printf("Arkena olet opiskellut yht. %d h\n", tunnitArkena);
	printf("Viikonloppuna olet opiskellut yht. %d h\n", tunnitViikonloppuna);

	return 0;
}
