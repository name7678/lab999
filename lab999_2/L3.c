#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

float S(float a, float b) {
	return a * b;
}
void o() {
	printf("Прямоугольник - это четырехугольник, у которого все углы\n");
	printf("прямые (равны 90 градусам), а противоположные стороны\n");
	printf("попарно равны и параллельны.\n");
	printf("Площадь прямоугольника: S = a * b,\n");
}
void draw(int a, int b, char c) {
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			printf("%c", c);
		}
		printf("\n");
	}
	printf("\n");
}
int main() {
	setlocale(LC_ALL, "ru_RU.UTF-8");
	float a, b;
	int drawA, drawB, choice;
	char c;
	printf("Выберите пункт: ");
	scanf("%d", &choice);
	switch (choice) {
	case 1:
		printf("Введите стороны: ");
		scanf("%f %f", &a, &b);
		printf("\nПлощадь прямоугольника со сторонами %.2f и %.2f = %.2f\n",
			a, b, S(a, b));
		break;

	case 2:
		o();
		break;

	case 3:
		printf("Введите целое число столбцов: ");
		scanf("%d", &drawA);
		printf("Введите целое число строк: ");
		scanf("%d", &drawB);
		printf("Введите символ: ");
		scanf(" %c", &c);
		draw(drawA, drawB, c);
		break;
	default:
		printf("");
		break;
	}
	system("pause");
	return 0;
}