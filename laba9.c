#include <stdio.h>
#include <locale.h>
#include <math.h>
#define ROW 9 //кол-во строк
#define COL 9 //кол-во столбцов

void zadanie1() {
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW;row++) {
		for (col = 1; col <= COL;col++)
			printf("%i+%i=%4d",row,col,col+row);


		printf("\n");
	}
	

}

void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie1();
}
