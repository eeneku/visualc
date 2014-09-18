#include<stdio.h>

int main()
{
	int luvut[10];
	int pienin = 0;

	printf("Anna kymmenen (10) kokonaislukua! Kerron niista pienimman.\n");

	for (int i = 0; i < 10; i++)
	{
		printf("Anna %d. luku: ", i+1);
		scanf_s("%d", &luvut[i]);

		if (i == 0) pienin = luvut[i];
		else if (luvut[i] < pienin) pienin = luvut[i];
	}

	printf("Luvuista ");

	for (int i = 0; i < 10; i++)
	{
		if (i > 0) printf(", ");
		printf("%d", luvut[i]);
	}

	printf(" pienin on %d\n", pienin);

	return 0;
}