#include <stdio.h>

int main()
{
	int kokonaisluku = 244;
	float liukuluku = 23.452;
	long isoluku = 204402;
	char merkki = 'E';
	double isoliuku = 210.22345;

	printf("%d\n%.1f\n%ld\n%c\n%.3lf\n", 
		kokonaisluku, liukuluku, isoluku, merkki, isoliuku);

	return 0;
}