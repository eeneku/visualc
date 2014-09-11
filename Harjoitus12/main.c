#include<stdio.h>

int main()
{
	double luku1 = 0.0, luku2 = 0.0;
	char operaattori;

	printf("Laskukone!\nAnna 1. liukuluku:\n");
	scanf_s("%lf", &luku1);
	
	printf("Anna 2. liukuluku:\n");
	scanf_s("%lf", &luku2);

	printf("Hienoa! Nyt anna joku laskuoperaattori (+, -, \, *). Lasken sitten nailla niin.\n");
	fflush(stdin);
	scanf_s("%c", &operaattori, 1);

	switch (operaattori)
	{
	case '+':
		printf("%.2lf + %.2lf = %.2lf", luku1, luku2, luku1 + luku2);
		break;
	case '-':
		printf("%.2lf - %.2lf = %.2lf", luku1, luku2, luku1 - luku2);
		break;
	case '/':
		if (luku2 == 0)
		{
			printf("Sorry! 0:lla ei voi jakaa.");
		}
		else
		{
			printf("%.2lf / %.2lf = %.2lf", luku1, luku2, luku1 / luku2);
		}
		break;
	case '*':
		printf("%.2lf * %.2lf = %.2lf", luku1, luku2, luku1 * luku2);
		break;
	}

	printf("\n");

	return 0;
}