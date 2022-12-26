#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <malloc.h>

void zadanie1();
void zadanie2();
void zadanie3();



void main() {
	setlocale(LC_ALL, "");
	zadanie1();

}

void zadanie1() {

	
	double a[10][10];
	int i, j, n, m;
	double z, drob = 0;
	printf("Введите количество строк :");
	scanf("%d", &n);
	printf("Введите количество столбцов: ");
	scanf("%d", &m);
	if (!(n < 10) || !(m < 10)) return;
	// Ввод элементов массива
	for (i = 0; i < n; i++) // цикл по строкам
	{
		for (j = 0; j < m; j++) {// цикл по столбцам


			drob = ((float)j) / 10;
			z = i + drob;
			a[i][j] = z;
			printf("a[%d][%d]=%.1lf  ", i, j, a[i][j]);


		}

		printf("\n");
	}

	printf("\n");

	int max_i = 0, max_j = 0, stolbik;
	printf("Введите номер столбца:");
	scanf("%d", &stolbik);
	printf("\n");
	
	for (i = 0; i < n; i++) // цикл по строкам
	{
		for (j = 0; j < m; j++) {// цикл по столбцам

			if ((i == n - 1) && (j == m - 1))
				printf("Элемент, расположенный в правом нижнем углу массива: a[%d][%d]=%.1lf \n", n - 1, m - 1, a[i][j]);
			if ((i == n - 1) && (j == stolbik-1))
				printf("Максимальный элемент в [%d] столбце=%.1lf \n",  stolbik, a[i][j]);
		}
	}
}

void zadanie2()
{
	srand(time(0));


	int a1[7][7];
	int i, j, n, m;
	printf("Введите количество строк :");
	scanf("%d", &n);
	printf("Введите количество столбцов: ");
	scanf("%d", &m);
	if (!(n < 8) || !(m < 8)) return;
	// Ввод элементов массива
	printf("Исходный массив:");
	printf("\n");
	for (i = 0; i < n; i++) // цикл по строкам
	{
		for (j = 0; j < m; j++) {// цикл по столбцам

			a1[i][j] = -9 + rand() % (9 + 9 + 1);

			if (a1[i][j] < 0)//выравнивание
				printf("a[%d][%d]=%d  ", i, j, a1[i][j]);
			else
				printf("a[%d][%d]= %d  ", i, j, a1[i][j]);
		}

		printf("\n");
	}

	printf("\n");

	int a2[7][7];
	printf("Транспонированный массив:");
	printf("\n");
	for (i = 0; i < n; i++) // цикл по строкам
	{
		for (j = 0; j < m; j++) {// цикл по столбцам

			a2[i][j] = a1[j][i];
			if (a2[i][j] < 0)
				printf("a[%d][%d]=%d  ", i, j, a2[i][j]);
			else
				printf("a[%d][%d]= %d  ", i, j, a2[i][j]);
		}

		printf("\n");
	}
	
	
	printf("\n");

	int sum = 0;

	for (i = 0; i < n; i++) {
		/*printf("a[%d][%d] = %d \n", i, j, a2[i][1]);*/ //вывод второго столбца
		sum += a2[i][1];
	}puts("");
	printf("Сумма элементов второго столбца %d\n", sum);

	printf("\n");


	int kolvo_odinakovih = 0;

	int stroka = 0;
	printf("Введите строку ");
	scanf("%d", &stroka);

	for (int i = 0; i < 5; i++)
	{
		if (a2[stroka][i] == a2[stroka][i + 1])
			kolvo_odinakovih++;
	}

	printf("Кол-во одинаковых %d\n", kolvo_odinakovih);

	printf("\n");

	int maxel = a2[0][0];

	int x = 0, y = 0;
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
		{
			if (a2[i][j] >= maxel) {
				maxel = a2[i][j]; x = i; y = j;
			}
		}
	printf("maxel[%i][%i] = %i", x, y, maxel);

	printf("\n");

}

void zadanie3() {
	srand(time(0));
	int students[8][5];
	int i, j, n, m;
	printf("    1 курс    |     2 курс    |     3 курс    |     4 курс    |     5 курс    |");
	printf("\n");

	for (i = 0; i < 8; i++) // цикл по строкам
	{
		for (j = 0; j < 5; j++) {// цикл по столбцам

			students[i][j] =  + rand() % 30+10;
			printf("Группа %d = %d | ", i + 1, students[i][j]);
			
		}

		printf("\n");
	}
	printf("\n");

	double summa=0, sr_students;
	for (i = 0; i < 8; i++) // цикл по строкам
	{
		summa = students[i][2] + summa;
		
	}
	printf("\n");
	
	printf("Среднее число студентов на 3 курсе = %.2lf", summa/8);

}







