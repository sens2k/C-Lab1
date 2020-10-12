#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 1, задание - 2.18
*/

int main(int argc, char* argv[])
{
    int x, k;
    printf("x = ");
    scanf("%d", &x);
    if ((x > 99) && (x < 1000)) {
        k = x % 10; x /= 10;
        k += x % 10; x /= 10;
        k += x % 10; x /= 10;
        printf("k = %d", k);
    }
    else printf("wrong input");
    return 0;
}
