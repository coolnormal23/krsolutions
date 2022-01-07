/* Exercise 1-5
 * modify the temperature conversion program to print in reverse order (300 to 0)*/

#include <stdio.h>

/* Print farenheit-celcius table*/
int main()
{
	int fahr;

	for(fahr = 300; fahr >= 0; fahr -= 20)
	{
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}
