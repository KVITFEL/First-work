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
	float a = 1, b = 3, g = 0.1;
	puts("----------------------");
	printf("|   x   |    f(x)    |\n");
	puts("----------------------");
	for(float x = 1;x<=3;x+=g) {
	  y = x*x - cos(pi*x)*cos(pi*x);
	  printf("|  %.1f  |  %f  | \n", x,y);
	}
	puts("----------------------");
	

}

void zadanie3()
{
 double sum=0.;
	for(double x = 1; x < 2.1; x += 0.1){
	    sum = sum + sin(x);
	    printf("sin %.1f = %f\n",x,sum);
	}
printf("Сумма синусов = %f", sum);
}	


void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie1();
}
