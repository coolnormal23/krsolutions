/* Exercise 2-1
 * Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, by printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types. */

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main()
{
	printf("STANDARD HEADERS\n\n");

	printf("CHARS\n");
	printf("signed char: %d -> %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char: %d -> %d\n\n", 0, UCHAR_MAX);

	printf("SHORTS\n");
	printf("signed short: %d -> %d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short: %d -> %u\n\n", 0, USHRT_MAX);

	printf("INTS\n");
	printf("signed int: %d -> %d\n", INT_MIN, INT_MAX);
	printf("unsigned int: %d -> %u\n\n", 0, UINT_MAX);

	printf("LONGS\n");
	printf("signed long: %ld -> %ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned long: %d -> %lu\n\n", 0, ULONG_MAX);

	printf("FLOAT\n");
	printf("float: %e -> %e\n\n", FLT_MIN, FLT_MAX);

	printf("DOUBLE\n");
	printf("double: %e -> %e\n\n", DBL_MIN, DBL_MAX);

	printf("COMPUTATION\n\n");
	
	/*A small comment on the method used: this book came out long ago, when 64 bit machines were supercomputers, so we'll
	 * be deviating from the book's flow and using the sizeof operator (which won't even be mentioned for another 50+ pages)
	 *  to determine the actual range on your machine (which probably DOSEN'T have 2 byte ints)
	 * The formulas, where n is the number of bits:
	 * The minimum of a signed type is (0 - ((2^n)/2))
	 * The maximum of a signed type is (0 + (((2^n)/2)-1)
	 * The minimum of an unsigned type is 0 (obviously)
	 * The maximum of an unsigned type is (0 + ((2^n)-1)) */

	printf("CHARS\n");
	printf("signed char: %ld -> %ld\n", (long)(0 - (pow(2,(sizeof(char)*8))/2)), (long)(0 + (((pow(2,sizeof(char)*8)/2)-1))));
	printf("unsigned char: %d -> %ld\n\n", 0, (long)(0 + (((pow(2,sizeof(char)*8))-1))));

	printf("SHORTS\n");
	printf("signed short: %ld -> %ld\n", (long)(0 - (pow(2,(sizeof(short)*8))/2)), (long)(0 + (((pow(2,sizeof(short)*8)/2)-1))));
	printf("unsigned short: %d -> %ld\n\n", 0, (long)(0 + (((pow(2,sizeof(short)*8))-1))));

	printf("INTS\n");
	printf("signed int: %ld -> %ld\n", (long)(0 - (pow(2,(sizeof(int)*8))/2)), (long)(0 + (((pow(2,sizeof(int)*8)/2)-1))));
	printf("unsigned int: %d -> %ld\n\n", 0, (long)(0 + (((pow(2,sizeof(int)*8))-1))));

	printf("LONGS\n");
	printf("signed long: %ld -> %ld\n", (long)(0 - (pow(2,(sizeof(long)*8))/2)), (long)(0 + (((pow(2,sizeof(long)*8)/2)-1))));
	printf("unsigned long: %d -> %lu\n\n", 0, (unsigned long)(0 + (((pow(2,sizeof(long)*8))-1))));

	/* I'm not computing the range of the floating-point types because I don't know what the hell a normalized number is. */
}
