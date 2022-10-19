#include <stdio.h>
#include <locale.h>
#include <math.h>

void zadanie1()
{
    int m,n,i,s;
    scanf("%d", &n);
    scanf("%d", &m);
    for (int i=m, s=0;i>=n;i--){
        s+=i;
        printf("выполнено %d раз", i+1);
    }
    printf("результат %d", s);
    

}

void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie1();
}
