#include <stdio.h>
#include <locale.h>

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


void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie1();
}
