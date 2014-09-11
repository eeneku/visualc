#include<stdio.h>

int main()
{
	char merkki;

	do
	{
		int kuukausi = 0;
		

		do
		{
			printf("Anna kuukausi (luku 1-12).\n");
			scanf_s("%d", &kuukausi);
		} while (kuukausi < 1 || kuukausi > 12);


		switch (kuukausi)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Kuukaudessa on 31 paivaa.");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Kuukaudessa on 30 paivaa.");
			break;
		case 2:
			printf("Kuukaudessa on 28 paivaa (karkausvuonna 29).");
			break;
		default:
			printf("Oho..");
			break;
		}

		printf("\n\nHaluatko jatkaa (k/e)?\n");
		fflush(stdin);
		scanf_s("%c", &merkki, 1);

	} while (merkki == 'k');

	return 0;
}