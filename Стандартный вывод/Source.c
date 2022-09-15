#include <locale.h>
#include <stdio.h>


void main()
	
{
	int k = 2;
	setlocale(LC_ALL, "RUS");
	printf("%20s \n ", "Это текст",k); 
	printf("%10.5f ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("%g разделить %g равно %g\n ", 7., 5., 7. / 5);
	printf("%g умножить %g равно %g\n ", 2000., 4., 2000. * 4);
}