#include <locale.h>
#include <stdio.h>


void main()
	
{
	int k = 2;
	setlocale(LC_ALL, "RUS");
	printf("%20s \n ", "��� �����",k); 
	printf("%10.5f ", 12.234657);
	printf("������� �� ������� %d �� %d ����� %d\n ", 5, 2, 5 % 2);
	printf("%g ��������� %g ����� %g\n ", 7., 5., 7. / 5);
	printf("%g �������� %g ����� %g\n ", 2000., 4., 2000. * 4);
}