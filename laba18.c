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
Point ser(Point z, Point w);
float dist(Point z, Point w);
void ak_47(Point z);


void main() {
	setlocale(LC_ALL, "ru-RU");
	Point b, a;
	a = (Point){ 1.f,2.f,'A' };
	b.name = 'B'; b.x = 5; b.y = -3;

	printf("point %c (%.1f, %.1f)", b.name, b.x, b.y);
	system("pause");
}




void put_point(Point z) {
	printf("point %c (%.1f, %.1f)", z.name, z.x, z.y);
}
float dist(Point z, Point w) {
	return sqrt(pow(z.x - w.x, 2) + pow(z.y - w.y, 2));
}
Point ser(Point z, Point w) {
	Point s;
	s.x = (z.x + w.x) / 2;
	s.y = (z.y + w.y) / 2;
	return s;
}
void chet(Point z)
{
	if ((z.x > 0) && (z.y > 0)) {
		puts("\nТочка находится в первой четверти");
	}
	else if ((z.x > 0) && (z.y < 0)) {
		puts("\nТочка находится во второй четверти");
	}
	else if ((z.x < 0) && (z.y < 0)) {
		puts("\nТочка находится в третьей четверти");
	}
	else if ((z.x < 0) && (z.y > 0)) {
		puts("\nТочка находится в чтвертой четверти");
	}
	else {
		puts("\nТочка находится в нулевой коордитате");
	}

}













