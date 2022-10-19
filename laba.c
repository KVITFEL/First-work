#include <stdio.h>
#include <locale.h>

void zadanie1()
{
char c;
printf("Введите символы 'a' or 'b': ");
scanf("%c",&c);
switch (c)
{
    case 'a':
    printf("Введено 'a'.\n");
    break;
    
    case 'b':
    printf("Введено 'b'.\n");
    break;
    
    default:
    printf("Неизвестный символ\n");
    break;
}

}


void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie1();
}
