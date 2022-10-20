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
	int r = 3, i, j;
	for (i = -r; i <= r; i++ ) {
		for (j = -r; j <= r; j++)
			if ()
				printf("*");
			else(" ");
		printf("\n");
	}
	return 0;
	
}


void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie1();
}
