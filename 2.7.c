#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 1, задание - 2.7
*/

int main(int argc, char* argv[])
{
	int a, b, c; a = 2; b = 6; c = 3;
	printf("%d\n", b-- - a);
	printf("%d\n", a += a++);
	printf("%d\n", ++b / a ++ * --c);
	printf("%d\n", a---b);
	printf("%d\n", -a-- - b);
	printf("%d\n", a = a++);
	printf("%d\n", b++ / ++a * c--);
	printf("%d\n", - --a);
	printf("%d\n", a - --c);
	printf("%d\n", ++a = b);
}