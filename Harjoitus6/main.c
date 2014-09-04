#include<stdio.h>

int main()
{
	int luku = 0;

	printf("Anna kokonaisluku: ");
	scanf_s("%d", &luku);

	if (luku > 0)
	{
		printf("Luku on suurempi kuin 0\n");
	}
	else if (luku < 0)
	{
		printf("Luku on pienempi kuin 0\n");
	}
	else
	{
		printf("Luku on 0\n");
	}
	return 0;
}