#include <stdio.h>
#include <stdlib.h>

int main()
{
	int luku = 0;
	int nelio = 0;

	printf("Anna kokonaisluku > ");
	scanf_s("%d", &luku);

	nelio = luku*luku;
	printf("Luvun nelio on %d\n", nelio);

	return 0;
}