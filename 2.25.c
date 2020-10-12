#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 1, задание - 2.25
*/

int main(int argc, char* argv[])
{
    char a, b, c, d;
    int x;
    scanf("%c%c%c%c", &a, &b, &c, &d);
    x = d | c << 8 | b << 16 | a << 24;
    printf("%#x\n%d", x, x);
    return 0;
}
