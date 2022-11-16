#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

struct point {
float x;
float y;
char name;
};

typedef struct point Point;
void put_point(Point z);
float dist(Point z, Point w);
float x(Point z, Point w);
float y(Point z, Point w);
float quarterA(Point x);
float quarterB(Point y);

void main() {
setlocale(LC_ALL, "rus");
Point b, a;
a = (Point){ 1.f, 2.f, 'A' };
b.name = 'B';
b.x = 5;
b.y = -3;
int m = -1;
printf("Выберите опцию:\n");
printf("1) Ввод координат точек a и b;\n");
printf("2) Вывести расстояние между двумя точками;\n");
printf("3) Вывести середину отрезка между точками;\n");
printf("4) Вывести, к какой четверти принадлежит точка;\n");
printf("5) Изменить координаты точек a и b;\n");
printf("0) Завершение программы.\n");
while (m != 0)
{
scanf("%d", &m);
switch (m) {
int aX, bX;
case 1:
put_point(a);
printf("\n");
put_point(b);
break;
case 2:
printf("\nРасстояние между двумя точками = %f", dist(b, a));
break;
case 3:
printf("Середина отрезка между точками = (%.1f ; %.1f)", x(b, a), y(b, a));
break;
case 4:
printf("\nТочка a принадлежит: %.f четверть", quarterA(a));
printf("\nТочка b принадлежит: %.f четверть", quarterB(b));
break;
case 5:
puts("Введите новые координаты точки а");
scanf("%f", &a.x);
printf("Новые координаты точки а: \n");
put_point(a);
printf("\n");
puts("\nВведите новые координаты точки b");
scanf("%f", &b.x);
printf("Новые координаты точки b: \n");
put_point(b);
case '0':
m = 0;
break;
default:
printf("\n Выполнение программы завершено \n");
}
}
}

void put_point(Point z) {
printf("point %c (%.1f, %.1f)", z.name, z.x, z.y);
}

float dist(Point z, Point w) {
float AB;
AB = sqrt((pow(z.x - w.x, 2) + pow(z.y - w.y, 2)));
return fabs(AB);
}

float x(Point z, Point w) {
return (z.x + w.x) / 2;
}

float y(Point z, Point w) {
return (z.y + w.y) / 2;
}

float quarterA(Point x) {
if (x.x < 0 && y > 0) return 2;
if (x.x > 0 && y < 0) return 4;
if (x.x > 0 && y > 0) return 1;
if (x.x < 0 && y < 0) return 4;
}
float quarterB(Point y) {
if (x < 0 && y.y > 0) return 2;
if (x > 0 && y.y < 0) return 4;
if (x > 0 && y.y > 0) return 1;
if (x < 0 && y.y < 0) return 3;
}








//zadanie2
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <locale.h>
struct tm *mytime;
time_t t;
void main() {
setlocale(0, "rus");
t = time (NULL);
mytime = localtime(&t);
printf("***********************************************************************************************************************\n");
printf("************************************************* Московское время %02d:%02d:%02d********************************************\n", mytime->tm_hour, mytime->tm_min, mytime->tm_sec);
printf("*********************************************До воскресенья %d часов и %d минут****************************************\n",(mytime->tm_wday)*24+(23-mytime->tm_hour),60-mytime->tm_min);
printf("***********************************************************************************************************************");
}
