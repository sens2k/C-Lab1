﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 1, задание - 2.18
*/

int main(int argc, char* argv[])
{
	/*
		1) d = 'a'+1 < c - значение 1					11)! m = =c + 87 - записано не верно
		2) m = - i - 5 * j >= k+1 - значение 0			12)m ! = c + 87 - записано не верно
		3) i + j++ + k = = -2*j - записано не верно		13)k = = j - 9 = = i - записано не верно
		4) m = 3 < j < 5 - значение 1					14)k *= 3 + j - значение -35
		5) m = 3 = = j < 5 - записано не верно			15)i + j = !k - записано не верно
		6) m = = c = 'w' - записано не верно			16) i += ++ j + 3 - значение 7
		7) m = c != 87 - значение 1						17) k %= m = 1 + n / 2 - записано не верно
		8) m = c = ! 87 - значение 0					18) 1 + 3 * n += 7 / 5 - записано не верно
		9) m = ! c = 87 -записано не верно				19) 1 + 3 * (n += 7) / 5 - записано не верно
		10) m = !c+87 - значение 87						20) c + i < c - 'x'+10 - значние 0
														21) i - k = = '0'+9 < 10 - записано не верно
	*/
	int i, j, k, m;
	char c, d;
	i = 1;
	j = 2;
	k = -7;
	m = 0;
	c = 'w';
}