#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	float population = 6763;
	float rate = 1.0118;
	float newpop = population;
	float newpop2 = population;
	int year;

	printf("%15s%30s%25s\n", "years from now", "population(in millions)", "increase(in millions)");

	for (year = 1; year <= 75; year++)
	{
		newpop2 = newpop;
		newpop = population *rate;
		rate = rate * 1.0118;
		printf("%15d%30.2f%25.2f\n", year, newpop, newpop - newpop2);

	}
	system("pause");
	return 0;

}