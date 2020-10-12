#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 1, задание - 2.16
*/

int main(int argc, char* argv[])
{
    double x, y;
    printf("x = ");
    scanf("%lf", &x);
    y = 2 * x * x * x * x - 3 * x * x * x + 4 * x * x - 5 * x + 6;
    printf("y = %lf", y);
    return 0;
}
