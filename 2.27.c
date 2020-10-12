#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 1, задание - 2.27
*/

int main(int argc, char* argv[])
{
    int n, p, x, y, i, m = 0xFFFFFFFF;
    scanf("%d%d%x%x", &n, &p, &x, &y);
    y = ~y;
    for (i = n; i; m <<= 1, i--);
    for (i = n; i < p; i++)
    {
        m <<= 1;
        m += 1;
    }

    y <<= (32 - n);
    x >>= (p - n);
    x |= y;
    x >>= 1;
    x &= m;
    printf("X=%x\n", x);
    return 0;
}
