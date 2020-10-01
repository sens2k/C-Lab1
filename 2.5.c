#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 1, задание - 2.5
*/

int main(int argc, char* argv[])
{
	/*
		a). -- c ; a = c / 2; - верно	e). a = c -= 1/2; - не верно
		b). a = -- c / 2; - верно	f). a = (c = c - 1)/2; - верно
		c). c -= 1; a = c % 2; - не верно	g). a = (c -= 1)/2; - верно
		d). a = c -- / 2; - верно	h). a=(c-= 1)/2.0; - верно

	*/
	int a, c; 
	c = 5;
	a = (c -= 1) / 2.0;
	printf("%d", a);
}