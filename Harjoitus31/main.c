#include <stdio.h>

int main()
{
	int luku1, luku2, summa = 0;
	int *p1, *p2, *p3 = 0;

	p1 = &luku1;
	p2 = &luku2;
	p3 = &summa;

	printf("Anna 1. luku: ");
	scanf_s("%d", &luku1);

	printf("Anna 2. luku: ");
	scanf_s("%d", &luku2);

	*p3 = *p1 + *p2;

	printf("Summa = %d\n", summa);
	return 0;
}