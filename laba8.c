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

void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie1();
}
