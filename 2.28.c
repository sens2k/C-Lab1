#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 1, задание - 2.28
*/

int main(int argc, char* argv[])
{
    int x, n;
    scanf("%d%d", &x, &n);
    x >>= n;
    printf("x = %d", x);
    return 0;
}
