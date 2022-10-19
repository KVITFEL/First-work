#include <stdio.h>
#include <locale.h>
#include <math.h>

void zadanie1() {
	int n,m;
	scanf("%d %d", &n, &m);
	int s = 0, r = 0;

	for (int i = m; i >= n; i--) {
		s += i;
		r++;
	}
	printf("выполнено - %d раз \n", r);
	printf("результат =  %d \n", s);

}


void zadanie2() 
{
	float pi = 3.14;
	double y;
	
	puts("--------------------");
	printf("|  x  |    f(x)    |\n");
	puts("--------------------");
	for(int x = 1;x<=3;x++) {
	  y = x*x - cos(pi*x)*cos(pi*x);
	  printf("|  %i  |  %f  | \n", x,y);
	}
	puts("--------------------");
	

}


void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie1();
}
