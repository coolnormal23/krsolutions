/*Exercise 1-15
 * Rewrite the temperature conversion program of section 1-2 to use a function for conversion. */

#include <stdio.h>

float convertToCelcius(int temp);

int main()
{
	float fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while(fahr <= upper)
	{
		printf("%3.0f\t%6.1f\n", fahr, convertToCelcius(fahr));
		fahr += step;
	}	
}

float convertToCelcius(int temp)
{
	return (5.0/9.0) * (temp - 32.0);
}
