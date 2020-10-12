#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 1, задание - 2.13
*/

int main(int argc, char* argv[])
{

}

void a()
{
	int i;
	i = (1 || 2) % (1 | 2);
	printf("i = %d\n", i);
}
void b()//Неверно
{
	int a, b, m, n, z;
	m = n = 5;
	z = a = b = 0;
	z--, (a = b) = z + (m != n);
	printf("%d %d %d %d %d\n", a, b, m, n, z);
}
void c()
{
	int i = 1;
	i = i << i | i;
	printf("i = %d\n", i);
}

void d()
{
	double x = 1.9; int a;
	double b = 3.7;
	a = b += (1 && 2 || 3) != (int)x;
	printf("%f %d %f\n", x, a, b);
}
void e()//Неверно 
{
	int x;
	x = 5; ++x = 10;
	printf("%d\n", x);
}
void f()
{
	int i, x, y; x = 5; y = 10; i = 15;
	x = (y = 0, i = 1);
	printf("%d %d %d\n", i, x, y);
	(x = y == 0), i = 1;
	printf("%d %d %d\n", i, x, y);
}
void g()
{
	int x, y;
	x = 5; y = x && ++x;
	printf("%d %d\n", x, y);
}
void h()
{
	int x = 2, y, z;
	x *= 3 + 2; x *= y = z = 4;
	printf("%d %d %d\n", x, y, z);
	x = y == z; x == (y = z);
	printf("%d %d %d\n", x, y, z);
}
void i()
{
	int x = 2, y = 1, z = 0;
	y = x && y || z;
	x = x || !y && z;
	z = x / ++x;
	printf("%d %d %d\n", x, y, z);
}
void j()
{
	int x = 03, y = 02, z = 01;
	printf("%d\n", x | y & -z);
	printf("%d\n", x ^ y & -z);
	printf("%d\n", x & y && z);
	printf("%d\n", x << 3);
}
void k()
{
	int x, y, z; x = y = z = 1;
	x += y += z;
	printf("%d\n", x < y ? y++ : x++);
	printf("%d\n", z += x < y ? ++x : y--);
	printf("%d %d %d\n", x, y, z);
	printf("%d\n", z >= y && y >= x);
}
void l()
{
	int x, y, z, i; x = y = z = 1;
	i = ++x || ++y && ++z;
	printf("%d%d%d%d\n", x, y, z, i);
	i = x++ <= --y || ++z >= i;
	printf("%d%d%d%d\n", x, y, z, i);
}