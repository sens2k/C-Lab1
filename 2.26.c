#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 1, задание - 2.26
*/

int main(int argc, char* argv[])
{
    char a, b, c, d;
    int x;
    scanf("%d", &x);
    d = x;
    c = x >> 8;
    b = x >> 16;
    a = x >> 24;
    printf("%c%c%c%c", a, b, c, d);
    return 0;
}
