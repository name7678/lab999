#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
double fa(double x) {
	double y;
	if (x <= 3.0) {
		y = pow(x, 2) - 3 * x + 9;
	}
	else {
		y = 1 / (pow(x, 3) + 3);
	}
	return y;
}
double fb(double x) {
	double y;
	y = x * exp(sin(pow(x, 2)));
	return y;
}
int main() {
	setlocale(LC_ALL, "ru_RU.UTF-8");
	int choice;
	double x;
	printf("Введите номер: ");
	scanf("%d", &choice);
	printf("Введите значение: ");
	scanf("%lf", &x);
	switch (choice) {
	case 1:
		printf("fa(x) = %lf\n", fa(x));
		break;
	case 2:
		printf("fb(x) = %lf\n", fb(x));
		break;
	case 3:
		printf("fa(x) * fb(x) = %lf\n", fa(x) * fb(x));
		break;
	case 4:
		printf("fa(x)^2 - fb(x)^2 = %lf\n", pow(fa(x), 2) - pow(fb(x), 2));
		break;
	case 5:
		printf("2 * (fa(x) + fb(x)) = %lf\n", 2 * (fa(x) + fb(x)));
		break;
	default:
		printf("Неправильный ввод\n");
		break;
	}
	system("pause");
	return 0;
}