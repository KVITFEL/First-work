#include <stdio.h>
#include <locale.h>
#include <math.h>

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


void zadanie2() {
	float x, y;
	char c;

	scanf("%f%c%f", &x, &c, &y);
	switch (c)
	{
	case ('+'):
		printf("%.4f", x + y);
		break;
	case ('-'):
		printf("%.4f", x - y);
		break;
	case ('/'):
		printf("%.4f", x / y);
		break;
	case ('*'):
		printf("%.4f", x * y);
		break;
	case ('^'): // vozvedenie v stepen'
		printf("%.4f", pow(x, y));
		break;
	default:
		printf("err");
	}
}


void zadanie3()
{
    char k;
    scanf("%c",&k);
    switch (k)
    {
    case '0':
        printf("В программе найдено %c ошибок", k);
        break;
    
    case '1':
        printf("В программе найдено %c ошибка", k);
        break;
    
    case '2':
        printf("В программе найдено %c ошибки", k);
        break;
        
    case '3':
        printf("В программе найдено %c ошибки", k);
        break;
        
    case '4':
        printf("В программе найдено %c ошибки", k);
        break;
   
    default:
        printf("В программе найдено %c ошибок", k);
        break;

}

}
void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie1();
}
