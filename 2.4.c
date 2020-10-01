#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 1, задание - 2.4
*/

int main(int argc, char* argv[])
{
	/*
		a) c++; a = 2 * c; - верно;	c) c+=1; a = c + c; - верно;
		b) a = 2 * c++; - не верно;	d) a = c++ + c; - не верно;
		e) ++c; a = c + c - верно; f) a = ++c + c; - верно;
		g) a = c+=1 + c; - не верно; h) a = (c+=1)+c - верно;
	*/

	int a, c;
	c = 5;
	a = (c += 1) + c;
	printf("%d", a);
}