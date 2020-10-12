#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 1, задание - 2.21
*/

int main(int argc, char* argv[])
{
    int x, h, m;
    printf("x = ");
    scanf("%d", &x);
    m = x / 60;
    h = m / 60;
    m -= h * 60;
    printf("hours = %d\nminutes = %d", h, m);
    return 0;
}
