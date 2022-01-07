/*exercise 1-4
 * Write a progrmam to print the corresponding celcius to farenheit conversion.*/

#include <stdio.h>

int main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celcius = lower;

	printf("Celcius Farenheit\n");

	while(celcius <= upper)
	{
		fahr = (celcius * (9.0/5.0)) + 32;
		printf("%3.0f\t%6.1f\n", celcius, fahr);
		celcius += step;
	}	
}
