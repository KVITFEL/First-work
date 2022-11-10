#include <stdio.h>
#include <locale.h>
#include <math.h>

float func1(float x);
#define N 100
//zadanie 1 
void main()
{

    setlocale(LC_ALL, "ru-RU");
    float A[N];
    float temp, sum = 0;
    for (int i = 0; i < N; i++)
    {
        printf("a[%d] = ", i + 1);
        scanf("%f", &temp);
        A[i] = temp;
        sum = sum + A[i];
    }
    printf("| индекс | исходное значение | новое значение | \n");
    for (int i = 0; i < N; i++) {
        printf("|    %d   |       %.3f       |      %.3f    |\n", i + 1, A[i], A[i] / 10 );// novoe znachenie
    }
    printf("Среднее арифметическое = %.5f", sum / N);
}

//zadanie2

void main()
{

    setlocale(LC_ALL, "ru-RU");
    float A[N];
    float temp = 0.1;
    float tab, sum = 0;
    

    for (int i = 0; i < N; temp = temp + tab) {
        A[i] = func1(temp);
        sum = sum + A[i];
        printf("\n");
        printf("| индекс | исходное значение | \n");
        printf("|    %d   |       %.3f       |\n", i + 1, A[i]);
        printf("Среднее арифметическое = % .5f", sum / N);

    }
}

float func1(float x) {
    float pi = 3.14;
    return x * x - cos(pi * x) * cos(pi * x);
}
