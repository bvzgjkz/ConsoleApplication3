#include <stdio.h>
#include <math.h>
int main() {
	double x, y;
	printf("Введите значение x: ");
	scanf_s("%lf", &x);
	y = exp(x);
	printf("e ^ %lf = %lf\n", x, y);
	return 0;
}
