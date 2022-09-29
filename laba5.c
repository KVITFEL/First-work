#include <stdio.h>
#include <math.h>
#include <conio.h>
#include<locale.h>
#define M_PI 3.14159265358979323846

void zadanie1()
{
	int gr;

	puts("Введите число");
	scanf("%d", &gr);
	double result = (gr * M_PI / 180);
	printf("sin : %.6f \n", sin(result));
}


#define c 0.4
void zadanie2()
{
	float x, a, b, y;
	puts("Введите число");
	scanf("%f", &x);
	a = log10(x);
	//printf("%f", a);
	b = pow(a,2) + sqrt(c * x);
	//printf("%f", b);
	y = (exp(2 * x) + pow(9.7, b));
	printf("%.2f", y);
}




void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie2();

}
