#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 1, задание - 2.6
*/

int main(int argc, char* argv[])
{
	/*
		a) E1 op= E2 и E1 = E1 op E2 - эквивалентны
		b) E1 op= E2 и E1 = E1 op (E2) - эквивалентны 

	*/
	int a, b;
	a = 1; b = 3;
	
	if ((a += b) == (a = a + b))
		printf("YES\n");
	if ((a += b) == (a = a + (b)))
		printf("YES\n");
}