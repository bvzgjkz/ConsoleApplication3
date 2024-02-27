#include <stdio.h>
#include <math.h>
int main() {
	double x, y;
	printf("Введите значение x: ");
	scanf_s("%lf", &x);
	y = exp(x);
	printf("e ^ %lf = %lf\n", x, y);

	y /= 2;
	printf_s("Значение у, умноженное на 2: %lf\n", y);

	return 0;
}