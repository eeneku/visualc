#include<stdio.h>

int main()
{
	int valinta = 0;
	double luku1 = 0.0, luku2 = 0.0;

	printf("Olen laskukone! Valitse laskutapa.\n1. Summa 2. Kertolasku\n");
	scanf_s("%d", &valinta);

	printf("Syota nyt luvut.\nLuku 1: ");
	scanf_s("%lf", &luku1);

	printf("Luku 2: ");
	scanf_s("%lf", &luku2);

	if (valinta == 1)
	{
		printf("Lukujen %.2lf ja %.2lf summa on %.2lf\n", luku1, luku2, luku1 + luku2);
	}
	else if (valinta == 2)
	{
		printf("Lukujen %.2lf ja %.2lf tulo on %.2lf\n", luku1, luku2, luku1 * luku2);
	}
	return 0;
}