#include <stdio.h>
#include <locale.h>
#include <math.h>

#define M_PI 3.14159265358979323846

double fa(double x);
double fb(double x);
float area_square(float a);
void draw_square();

void main()
{
	
	//zadanie1
	setlocale(LC_ALL, "ru-RU");
	float x = 3;
	printf("Введите х \n");
	scanf("%.4f", &x);
	printf("отношение = %.4f произведение = %.4f разность квадратов = %.4f удвоенная сумма = %.4f \n\n",fb(x)/fa(x), fa(x) * fb(x), fa(x) * fa(x) - fb(x) * fb(x), 2 * (fa(x) + fb(x)));
	//zadanie3
	
	while(1){
	char a;
	printf("\n(1) Рассчитать площадь \n(2) Вывести определение фигуры \n(3) Нарисовать фигуру \n");
	switch (a = getchar()) {
	case ('1'):
		puts("Введите сторону квдрата"); float arsq = 0; scanf("%f", &arsq);
		printf("Площадь квадрата = %.1f", area_square(arsq));
		break;
	case ('2'):
		printf("Квадрат — правильный четырёхугольник, у которого все стороны и углы равны между собой.\n");
		break;
	case ('3'):
		draw_square();
		break;	}
	break;
	}
	
}


double fa(double x) {

	if (x <= 3)
	{
		return(pow(x, 2) - (3 * x) + 9);
	}
	else
	{
		return(1 / (pow(x, 3) + 3));
	}

}


double fb(double x)
{
	return (x * exp(sin(pow(x, 2))));
	
}


float area_square(float a) {
	a = pow(a, 2); return a;
}


void draw_square() {

	printf("Символ: "); 
	char smb; 
	scanf(" %c", &smb);
	printf("Размер стороны: "); 
	float rzm;
	scanf(" %f", &rzm);

	int r = (int)ceil(rzm);
	printf("\n");
	for (int i = 1; i <= r; ++i) {
		for (int i = 1; i <= r; ++i) {
			printf("%c ", smb);
		}
		printf("\n");
	}
}
