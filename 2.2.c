﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 1, задание - 2.2
*/
int main(int argc, char* argv[])
{
	/*
		1) 1.71 - константа c плавающей точкой, ее значение - 1.71
		2) 5.E+2 - константа не c плавающей точкой
		3) 0X1E6 - константа не c плавающей точкой
		4) 1e-2f - константа c плавающей точкой, ее значение - 0.01
		5) 1E-6 - константа не c плавающей точкой
		6) 0e0 - константа c плавающей точкой, ее значение - 0
		7) 0F - константа записана не верно
		8) -12.3E-6 - константа c плавающей точкой, ее значение - -12.3E-6
		9) 0.314159E1F - константа c плавающей точкой, ее значение - 3.14159
		10) 0x1A1.5 - константа записана не верно
		11) 1234.56789L - константа c плавающей точкой, ее значение - 1234.57
		12) +10e6 - константа не c плавающей точкой
		13) .005 - константа c плавающей точкой, ее значение - 0.005
		14) 05.5 - константа c плавающей точкой, ее значение - 5.5
		15) 1.0E-10D - константа записана не верно
		16) 123456L - константа не c плавающей точкой
		17) 0051E-04 - константа c плавающей точкой, ее значение - 0.0051
		18) 0 - константа c плавающей точкой, ее значение - 0 
		19) 3.1415U - константа записана не верно
		20) E-6 - константа записана не верно
	*/
	double v1, v4, v6, v8, v9, v11, v13, v14, v16, v17, v18;
	v1 = 1.71;
	v4 = 1e-2f;
	v6 = 0e0;
	v8 = -12.3E-6;
	v9 = 0.314159E1F;
	v11 = 1234.56789L;
	v13 = .005;
	v14 = 05.5;
	v16 = 123456L;
	v17 = 0051E-04;
	v18 = 0;
	printf("%g\n%g\n%g\n%g\n%g\n%g\n%g\n%g\n%g\n%g\n%g\n", v1, v4, v6, v8, v9, v11, v13, v14, v16, v17, v18);
}