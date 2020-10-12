#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 1, задание - 2.17
*/

int main(int argc, char* argv[])
{
    int x, k;
    printf("x = ");
    scanf("%d", &x);
    k = x / 100 - x / 1000 * 10;
    printf("k = %d", k);
    return 0;
}
