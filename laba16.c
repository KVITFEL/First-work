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
	zadanie_individual();

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

void zadanie_individual() {

	srand(time(0));
	double* a,*b,*c,*d, summa_c=0;
	int size,size_d, i,q;
	size = 10 + rand() % 50;
	size_d = size * 2 +1;
	a = (double*)malloc(size_d * sizeof(double));
	b = (double*)malloc(size_d * sizeof(double));
	c = (double*)malloc(size * sizeof(double));
	d = (double*)malloc(size_d * sizeof(double));
	printf("Массив a: ");
	printf("\n");

	for (i = 0; i < size; i++) {
		a[i] = -100 + rand() % (100 + 100 + 1);
		printf("%.2lf ", a[i]);

	}
	printf("\n");
	printf("\n");
	printf("Массив b: ");
	printf("\n");
	for (i = 0; i < size; i++) {
		b[i] = -100 + rand() % (100 + 100 + 1);
		printf("%.2lf ", b[i]);

	}
	printf("\n");
	printf("\n");
	printf("Массив c: ");
	printf("\n");
	for (i = 0; i < size; i++) {
		c[i] = -100 + rand() % (100 + 100 + 1);
		printf("%.2lf ", c[i]);

	}
	printf("\n");
	printf("\n");
	for (i = 0; i <= size_d; i++) {
		if (i >= size) 
			a[i] = 0;
	}


	//массив b в обратном порядке
	for (int i = 0; i <size; i++) {
		b[i] = b[size - i - 1]; 
		summa_c = summa_c + c[i];
	}
	printf("\n");
	printf("\n");
	printf("Массив b izm: ");
	for (i = 0; i <= size_d; i++) {
		if (i <= size)
			b[i] = 0;
		if (i > size)
			b[i + size] = b[i];
		printf("%.2lf ", b[i]);
	}
	

	printf("\n");
	printf("\n");
	printf("Массив d: ");
	printf("\n");


	for (i = 0; i < size; i++) {

		d[i] = a[i];
	}
	
		}



