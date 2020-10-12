#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 1, задание - 2.19
*/

int main(int argc, char* argv[])
{
    double x;
    int k;
    printf("x = ");
    scanf("%lf", &x);
    k = x * 10;
    k %= 10;
    printf("k = %d", k);
    return 0;
}
