#include<stdio.h>
#include<math.h>

#define PI (3.141592653589793)

int main()
{
	float sade = 0.0;

	printf("Anna ympyran sade: ");
	scanf_s("%f", &sade);

	printf("Ympyran pinta-ala on %.2lf ", PI*sade*sade);

	return 0;
}