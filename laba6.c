#include <stdio.h>
#include <locale.h>
#include <math.h>

void zadanie1()
{
	int yeas;
	puts("Введите год:");
	scanf("%d", &yeas);

	if (yeas % 4 == 0 && yeas % 100 != 0 || yeas % 400 == 0)
		printf("Считается високосным годом - %d", yeas);
	else
		printf("Считает не високосным - %d ", yeas);

}



void zadanie2() 
{
   	double x = 13;
	printf("%.1f", x <= 13 ? (pow(-x, 3) + 9) : (-(3/ (x+1))));
}

void zadanie3() {
  int yeas;
	puts("Введите год:");
	scanf("%d", &yeas);

	if (yeas % 4 == 0 && yeas % 100 != 0 || yeas % 400 == 0)
		printf("В %d году - 366 дней", yeas);
	else
		printf("В %d году - 365 дней", yeas);
	
	
	
void zadanie_home()
{	//14 вариант
    double x, y;
    printf("x = "); scanf("%lf", &x);
    printf("y = "); scanf("%lf", &y);
    if (x*x/pow(3.5,2) + y*y/pow(4,2) >= 1 && x*x/pow(5.75,2) + y*y/pow(6,2) <= 1 && 2<=y<=6)
        printf("Входит");
    else
        printf("Не входит");
}



void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie_home();
}
