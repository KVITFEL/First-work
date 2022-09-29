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




void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie1();

}
