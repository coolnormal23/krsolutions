/*Exercise 1-6: verify that the expression getchar() != EOF is 0 or 1*/
/*getchar() != EOF is 0.*/
#include <stdio.h>

int main()
{
	int c;

	while((c = getchar()) != EOF)
	{
		putchar(c);
	}
	printf("%d", (getchar() != EOF));
}
