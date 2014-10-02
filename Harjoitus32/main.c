#include <stdio.h>

int main()
{
	int luku1 = 5;
	int luku2 = 14;
	int temp = 0;
	
	printf("Luku1: %d ja luku2: %d\n", luku1, luku2);

	temp = luku1;
	luku1 = luku2;
	luku2 = temp;

	printf("Luku1: %d ja luku2: %d\n", luku1, luku2);

	return 0;
}