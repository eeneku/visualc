#include <stdio.h>

int main()
{
	int luku1 = 5;
	int luku2 = 14;
	int *p1 = &luku1;
	int *p2 = &luku2;
	
	printf("Luku1: %d ja luku2: %d\n", *p1, *p2);

	p1 = &luku2;
	p2 = &luku1;

	printf("Luku1: %d ja luku2: %d\n", *p1, *p2);

	return 0;
}