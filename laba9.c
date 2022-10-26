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


void zadanie3() {
	while (1)

	{

		char a;

		// Решение домашней задачи

		printf("Продолжить ? (Да - y, нет - n)");

		if ((a = getchar()) == 'n') break;
		else{	float x = 2.06, y = 0;


		// esli x == 63 ili 64 to == 0
		long double sum1 = 1, sum2 = 1;

		for (int i = 1; i < 64; i += 2) {
			y = x - i;
			sum1 *= y;
			printf("x - %i | %.2f - %i = %f | %.5f\n", i, x, i, y, sum1);
			y = 0;
		}
		for (int i = 2; i < 65; i += 2) {
			y = x - i;
			sum2 *= y;
			printf("x - %i | %.2f - %i = %f | %.5f\n", i, x, i, y, sum2);
			y = 0;
		}
		printf("%.5f\n", sum1 / sum2);
		}
	}
}

void zadanie4() {
	int r;
  scanf("%i", &r);
	printf("\n");
	for (int i = 1; i <= r; ++i) {
		for (int i = 1; i <= r; ++i) {
			printf("* ");
		}
		printf("\n");
	}

}


void zadaniehz()
{
    int a = 9;
    int ch = '*';
    
    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= a; j++)
            if(j == a || i == a || i == a - j + 1)
                putchar(ch);
            else
                putchar(' ');
        putchar('\n');        
    }
    
    return 0;
}

void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie4();
}
