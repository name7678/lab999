#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
double sin_n(double x, int N) {
    double sum = 0.0;
    double t = x;
    int k;

    for (k = 0; k < N; k++) {
        sum += t; 
        double n = -x * x;
        double d = (2.0 * k + 2.0) * (2.0 * k + 3.0);
        t = t * n/ d;
    }
    return sum;
}
double sin_eps(double x, double eps) {
    double sum = 0.0;
    double t = x; 
    int k = 0;
    while (fabs(t) >= eps) {
        sum += t;
        double n= -x * x;
        double d = (2.0 * k + 2.0) * (2.0 * k + 3.0);
        t = t * n / d;
        k++;
    }
    return sum;
}
int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double x;
    int n;
    printf("Введите значение: ");
    scanf("%lf", &x);
    scanf("%d", &n);
    double res1 = sin(x);
    double res2 = sin_n(x, n);
    double res3 = sin_eps(x, n);
    printf("Результат: %lf\n", res1);
    printf("Результат: %lf\n", res2);
    printf("Результат: %lf\n", res3);
    system("pause");
    return 0;
}