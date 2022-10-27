#include <stdio.h>
#include <locale.h>
#include <math.h>


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
void chet(Point z) { 
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


void main()
{
	setlocale(LC_ALL, "ru-RU");
	zadanie1();
}
