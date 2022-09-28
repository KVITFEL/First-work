#include <stdio.h>
#include <locale.h>
#define D 2.54

void zadanie1() {
	int num, num2;
	puts("Введите число:");
	scanf("%d", &num);
	printf("Введено число %d\n", num);
	puts("Введите второе число:");
	scanf("%d", &num2);
	printf("%d Сумма\n", num2+num);             // Сумма
	printf("%d Разность от вычетания первого числа из второго\n", num2 - num);           // Разность
	printf("%d Произведение\n", num2*num);             // Произведение 
	printf("%d Частное от деления второго числа на первое\n", num2 / num); // Частное
	printf("%d Остаток от деления второго числа на первое\n", num2 % num); // Остаток
}

void zadanie2() {
	int dym;
	float result;
	puts("Введите число:");
	scanf("%d" , &dym);
	result = D * dym;
	printf("%d дюймов – это %.1f см \n", dym, result);
}
void zadanie3() {
	int nm1 = 3, nm2 = 5;
	printf("| a * b | a + b | a - b |\n");
		printf("| %d * %d | %d + %d | %d - %d |\n", nm1, nm2, nm1, nm2, nm1, nm2);
		printf("| %d | %d | %d |", nm1 * nm2, nm1 + nm2, nm1 - nm2);
}

void zadanie_samomy()
{
    int year,num1,num2,num3,result;
    year = 20220928;
    puts("Дату рождения записать в виде == 00.00.0000");
    puts("Введите число вашего рождения:");
    scanf("%d", &num1);
    puts("Введите номер месяца вашего рождения:");
    scanf("%d", &num2);
    puts("Введите год вашего рождения:");
    scanf("%d", &num3);
    int date = num3*10000+num2*100+num1;
    result = (year - date)/10000;
    printf("%d",result);
}

void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie_samomy();
}
