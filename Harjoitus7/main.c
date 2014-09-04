#include<stdio.h>

int main()
{
	double hinta = 0, alennusprosentti = 0;

	printf("Anna tuotteen hinta: ");
	scanf_s("%lf", &hinta);
	printf("Anna tuotteen alennusprosentti: ");
	scanf_s("%lf", &alennusprosentti);

	if ((hinta * ((100 - alennusprosentti) / 100)) < (hinta*0.5))
	{
		printf("Tuotteen hinta on alle puolet alkuperaisesta!\n");
	}
	return 0;
}