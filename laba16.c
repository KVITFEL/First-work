#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <malloc.h>

void zadanie1();
void zadanie2();
void zadanie_individual();



void main() {
	setlocale(LC_ALL, "");
	zadanie1();

}

int* insert(int* ptr_arr, int* size, int index, int num) {
	
	   //ptr_arr - адрес массива
	  // size - число элементов
	   //k : индекс элемента
	   //num - вставляемое значение
	   
	ptr_arr[index] = num;

	return ptr_arr;
}

int delete_k(double* ptr_arr, int size, int k) {

	//ptr_arr - адрес массива
	//size - число элементов
	//k - индекс удаляемого элемента 

	int n = size - 1;

	for (int i = k; i < (size - 1); i++) ptr_arr[i] = ptr_arr[i + 1];

	return n;//возвращает число элементов массива

}



void zadanie1() {
	srand(time(0));
	int* ptr_array, size, i;
	printf("Введите размер массива: \n");
	scanf("%d", &size);
	printf("Старый массив ");
	printf("\n");
	ptr_array = (int*)malloc(size * sizeof(int));

	if (ptr_array == NULL) {

		puts("error");

		return -1;

	}
	for (i = 0; i < size; i++) {
		ptr_array[i] = -100 + rand() % (100 + 100 + 1);
		printf("%d ", ptr_array[i]);

	}
	
	
	printf("\n");
	printf("Новый массив\n");
	for (i = 0; i < size; i++) {
		if (i % 2 == 1) {
			ptr_array[i] = ptr_array[i] + 1;
		}
		printf("%d ", ptr_array[i]);

	}
	free(ptr_array);
}


void zadanie2() {
	srand(time(0));
	double* ptr_array;
	int size, i;
	printf("Введите размер массива: \n");
	scanf("%d", &size);
	printf("Старый массив ");
	printf("\n");
	ptr_array = (double*)malloc(size * sizeof(double));

	if (ptr_array == NULL) {

		puts("error");

		return -1;

	}

	for (i = 0; i < size; i++) {
		ptr_array[i] = -1 + rand() % (1 + 1 + 1);
		printf("%.2lf ", ptr_array[i]);
	}

	printf("\n");
	//2.1 Выполните удаление заданного элемента массива (по варианту), и напечатайте изменненный массив с помощью функций работы 14.
	//1. Удаление элемента с заданным номером.
	printf("\n");
	delete_k(ptr_array, size, 1);

	for (int i = 0; i < size - 1; i++) {
		printf("%+.4lf \n", ptr_array[i]);
	}

	
	printf("\n");

	int* ptr_array1 = (int*)malloc(size * sizeof(int));
	for (int w = 0; w < size; w++) {
		ptr_array1[w] = w;
	}
	for (int w = 0; w < size; w++) {
		printf("%i \n", ptr_array1[w]);
	}printf("\n");

	int a = (0 + rand() % (0 - 5));
	printf("rand %i\n\n", a);

	insert(ptr_array1, size, a, -999);

	for (int w = 0; w < size; w++) {
		printf("%i \n", ptr_array1[w]);
	}

	free(ptr_array);
	free(ptr_array1);


}




//Массив d0, d1, d2, ..., dh, приняв в качестве первых его элементов все
//положительные элементы массива а0, а1, а2, ..., an с сохранением порядка их
//следования, а в качестве остальных элементов все отрицательные элементы
//b0, b1, b2 ..., bm в обратном порядке.

void zadanie_individual() {

	srand(time(0));
	int size, i;
	size = -10 + rand() % 50;

	double* a = (double*)malloc(size * sizeof(double));
	double* b = (double*)malloc(size * sizeof(double));
	for (i = 0; i < size; i++) {
		a[i] = i;
		printf("a[%d] %lf \n", i, a[i]);
	}printf("\n");
	for (i = 0; i < size; i++) {
		b[i] = i;
		printf("b[%d] %lf \n", i, b[i]);
	}printf("\n");

	double* d = (double*)malloc((size * 2) * sizeof(double));

	for (i = 0; i < size; i++) {
		d[i] = a[i];
	}

	for (int i = size - 1; i >= 0; i--) {
		d[size + i] = b[size - i - 1];
	}
	for (int i = 0; i < size * 2; i++) {
		b[i] = i;
		printf("d[%d] %lf \n", i, d[i]);
	}

	system("pause");
	return 0;
}
