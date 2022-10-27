#include <stdio.h>
#include <locale.h>
#include <math.h>


double fa(double x) {

	double y = (x <= 3 ? (pow(x, 2) - (3 * x) + 9) : (1 / (pow(x, 3) + 3)));
	return y;


	
void main()
{
  //zadanie1
	float x = 3;
	printf("%lf %lf\n", fa(x), fb(x));
	printf("fa(x)=%lf , fb(x)=%lf \n", fa(x), fb(x));
	printf("произведение %lf разность квадратов %lf удвоенная сумма %lf \n\n", fa(x) * fb(x), pow(fa(x), 2) - pow(fb(x), 2), 2 * (fa(x) + fb(x)));

	setlocale(LC_ALL, "ru-RU");
	zadanie3();
}
  
  //zadanie2
	int count = 0, stlb1 = 15, stlb2 = 11, stlb3 = 11;

	printf("Угол a, градусы ");
	printf("| sin "); balans(0, 6);
	printf("| sin_n "); balans(0, 4);
	printf("| sin_eps \n");

	int dln = 0;

	for (int qt = 0; qt <= 360; qt += 30) {
		dln = dlina(qt, count); balans(dln, stlb1); printf("%i ", qt);
		printf("| %lf ", sin((qt * M_PI) / 180)); if (sin((qt * M_PI) / 180) >= 0) balans(0, 1);
		printf("| %lf ", sin((sin_n(qt, 1) * M_PI) / 180)); if (sin((sin_n(qt, 1) * M_PI) / 180) >= 0) balans(0, 1);
		printf("| %lf \n", sin((-1) * (sin_eps(qt, 1) * M_PI) / 180));
	}
void zadanie10_3()
{	//Фигура - произвольный треугольник
	float a, b, c;//стороны треугольника
	double p,s;//полупериметр и площадь
	puts("VVedite ctorony a");
	scanf("%f", &a);
	puts("VVedite ctorony b");
	scanf("%f", &b);
	puts("VVedite ctorony c");
	scanf("%f", &c);
	p = (a + b + c) / 2;
	s = sqrt(p*(p - a)*(p - b)*(p - c));
	printf("%f", s);
}
