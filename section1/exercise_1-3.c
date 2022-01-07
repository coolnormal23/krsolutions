/*exercise 1-3
 * Modify the temperature conversion program to print a heading above the table.*/

#include <stdio.h>
/* print Farenheit-celcius table
 * for fahr = 0, 20, ..., 300 */

int main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("Farenheit Celcius\n");

	while(fahr <= upper)
	{
		/*celcius = 5 * (fahr-32) /9; only uses integer arithmetic, truncates*/
		celcius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celcius);
		fahr += step;
	}	
}
