#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{
	int a, b, c, d, e;
	a = 2; b = 13; c = 7; d = 19; e = -4;
	printf("%d\n", b % e);
	printf("%d\n", d / a % c);
	printf("%d\n", 7 - d % (3 - a));
	printf("%d\n", c % d - e);
	printf("%d\n", b % -e * c);
	printf("%d\n", -e % a + b / a * - 5 + 5);
	printf("%d\n", 9 / c - -20 / d);

}