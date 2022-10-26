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


void zadanie2() {

	int row, col, count = 0;
	printf("\n");
	for (row = 1; row <= 5; ++row) {
		count = 0;
		for (col = 1; col <= 5; col++) {
			((col % 2 != 0) && (col != row)) ? printf("%5d", row-1) : printf("%5d", row - col);
			if ((row - col) == 0) break;
		}
		printf("\n");
	}
}


void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie1();
}
