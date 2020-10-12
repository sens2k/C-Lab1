#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 1, задание - 2.22
*/

int main(int argc, char* argv[])
{

}
int one()//1
{
    double x, y;
    printf("x = ");
    scanf("%lf", &x);
    y = x * x * x;
    y = y * y * x;
    y = y * y * y;
    printf("y = %lf", y);
    return 0;
}
int two()//2
{
    double x, y, z;
    printf("x = ");
    scanf("%lf", &x);
    z = x * x;
    y = z * x;
    printf("y = %lf\n", y);
    y = z * y;
    y = y * y;
    printf("y = %lf", y);
    return 0;
}
int three()//3
{
    double x, y, z;
    printf("x = ");
    scanf("%lf", &x);
    y = x * x;
    z = y * x;
    y = z * y;
    printf("y = %lf\n", y);
    y = y * y * z;
    printf("y = %lf", y);
    return 0;
}
int foure()//4
{
    double x, y, z;
    printf("x = ");
    scanf("%lf", &x);
    y = x * x;
    printf("y = %lf\n", y);
    z = y * y;
    y = z * x;
    printf("y = %lf\n", y);
    z = z * z;
    y = z * z * x;
    printf("y = %lf", y);
    return 0;
}
int five()//5
{
    double x, y, z;
    printf("x = ");
    scanf("%lf", &x);
    y = x * x;
    z = y = y * y;
    printf("y = %lf\n", y);
    y = y * y;
    y = z * y;
    printf("y = %lf\n", y);
    y = y * y;
    y = y * z;
    printf("y = %lf", y);
    return 0;
}
