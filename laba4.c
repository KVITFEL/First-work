#include <stdio.h>
#include <locale.h>

void zadanie1() 
{
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("%c %i %f %d \n", c, i, f, d);
	
	printf("input float >");
	scanf("%f", &f);
	printf("%f %i %f\n", f, (int)f, f - (int)f);//Задача 1а. Выведите отдельно целую и дробную часть введенного вещественного числа
	
	printf("input char >");
	scanf("%c", &c);
	printf("%c %d %X \n", c, c, c); //Задача 1б. Выведите шестнадцатеричный и десятичный код введенного символа
	
	printf("input int >");
	scanf("%i", &i);
	printf("%i %f\n", i, (1 / (float)i)); //Задача 1в. Выведите десятичное число, соотвествующее 1/i
	
	printf("input double >");
	scanf("%lf", &d);
	printf("%lf \n", d);
}
void zadanie2() 
{
	int a = 11, b = 3;

	printf("%i %f %f \n", ((int)a/(int)b), ((float)a/(float)b), ((double)a/(double)b));

}

void zadanie3() 
{
	int n; 
	puts("Введите число");
	scanf("%i", &n);
	printf("Последняя цифра %d, первая - %d, сумма цифра %d", n % 10, n / 100, 	((n % 10) + (n / 100) + ((n % 100) / 10)));
	printf("\nЧисло наоборот: %d%d%d", n % 10, ((n % 100) / 10), n / 100);
}


void individual() 
{
    int distance,x,rolls,price_r,price_f;
    puts("Введите число - Стоимость 1 галлона бензина");
	scanf("%d", &x);
	rolls = 390 / 15; //кол-во галлонов на Роллс-Ройсе
	printf("От Лондона до Эдинбурга на машине Роллс-Ройс потребуется %d галлонов", rolls);
	price_r = 26*x;
	
	float ford ; 
	ford = roundf(390.0/36);//кол-во галлонов на Форде
	printf("\nОт Лондона до Эдинбурга на машине Форд-Эскорт потребуется %.0f галлонов",ford);
	price_f = ford*x;
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\nСтоиость поездки на Роллс-Ройсе составит %d фунтов",price_r);
	printf("\nЕсли он поедет на Форд-Эскорт, он сэкономит %d фунтов",price_r - price_f);
    
}


void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie3();
}
	
	
	
	
	
