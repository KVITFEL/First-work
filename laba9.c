#include <stdio.h>
#include <locale.h>
#include <math.h>
#define ROW 9 //кол-во строк
#define COL 9 //кол-во столбцов

void zadanie1() {
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; row++) {
		for (col = 1; col <= COL; col++)
			printf("%d + %d = %2d    ", row, col, col + row);


		printf("\n");
	}

	printf("\n");
}


void zadanie3()
{
    int i;
    int j = 0;
    char a = getchar();
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 30-i*3; j++)putchar(' ');
        putchar(a);
        for(j = 0; j < i*3-j;j++)putchar(' ');
        putchar(a);
        putchar('\n');
    }
    putchar(' ');
    putchar(' ');
    for(i = 0; i < 16; i++) putchar(a);
}

void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie3();
}
