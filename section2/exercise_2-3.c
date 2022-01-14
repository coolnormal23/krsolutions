/* Exercise 2-3
 * Write the function htoi(s), which converts a string of hexadecimal digits
 * (including an optional 0x or 0X) into its equivalent integer value.
 * The allowable digits are 0 through 9, a through f, and A through F. */

#include <stdio.h>
#include <math.h>

int htoi(char str[]);

int main()
{
	char number[10];
	int c;
	int i = 0;

	printf("enter a hexadecimal integer: ");

	while((c = getchar()) != EOF && i < 9)
	{
		if((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F') || c == 'X' || c == 'x')
		{
			number[i] = c;
		}
		else if(c == '\n' || c == '\t')
		{
			break;
		}
		i++;
	}
	number[i] = '\0';

	printf("%s in decimal: %d\n", number, htoi(number));
}

int htoi(char str[])
{
	int j = 0;
	int decnumber = 0;
	int start = 0;

	while(str[start] != '\0')
	{
		start++;
	}

	for(int i = start; i >= 0; i--)
	{
		if(str[i] == 'X' || str[i] == 'x')
		{
			break;
		}
		else if(str[i] >= '0' && str[i] <= '9')
		{
			decnumber += ((str[i] - '0')*pow(16,j));
			j++;
		}
		else if(str[i] >= 'a' && str[i] <= 'f')
		{
			decnumber += (((str[i] - 'a')+10)*pow(16,j));
			j++;
		}
		else if(str[i] >= 'A' && str[i] <= 'F')
		{
			decnumber += (((str[i] - 'A')+10)*pow(16,j));
			j++;
		}
	}

	return decnumber;
}
