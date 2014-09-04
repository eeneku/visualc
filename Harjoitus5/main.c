#include<stdio.h>

int main()
{
	double lampotila = 0.0;

	printf("Anna lampotila Fahrenheiteina, muutan sen Celsius-asteiksi: ");
	scanf_s("%lf", &lampotila);

	printf("Fahrenheit %.2lf on Celsius-asteina %.2lf\n", lampotila, (5.0 / 9.0) * (lampotila - 32.0));

	return 0;
}