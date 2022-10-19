#include <stdio.h>
#include <locale.h>

void zadanie1()
{
char c;
printf("Введите цифру или букву: ");
scanf("%c",&c);
switch (c)
{
    case '0':
    printf("Это цифра '0'.\n");
    break;
    
    case '1':
    printf("Это цифра '1'.\n");
    break;
    
    case '2':
    printf("Это цифра '2'.\n");
    break;
    
    case '3':
    printf("Это цифра '3'.\n");
    break;
    
    case '4':
    printf("Это цифра '4'.\n");
    break;
    
    case '5':
    printf("Это цифра '5'.\n");
    break;
    
    case '6':
    printf("Это цифра '6'.\n");
    break;
    
    case '7':
    printf("Это цифра '7'.\n");
    break;
    
    case '8':
    printf("Это цифра '8'.\n");
    break;
    
    case '9':
    printf("Это цифра '9'.\n");
    break;
    
    default:
    printf("Это буква %c \n",c);
    break;
}

}


void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie1();
}
