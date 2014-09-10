#include<stdio.h>

int main()
{
	float luku1 = 0.0, luku2 = 0.0;

	printf("Anna kaksi lukua, niin lasken niiden keskiarvon:\n");
	scanf_s("%f", &luku1);
	scanf_s("%f", &luku2);

	printf("Lukujen %.2f ja %.2f keskiarvo on %.2f\n", luku1, luku2, (luku1+luku2)/2);

	return 0;
}