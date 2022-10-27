#include <stdio.h>
#include <locale.h>
#include <math.h>

double fa(double x);
double fb(double x);


void main()
{
	setlocale(LC_ALL, "ru-RU");
	float x = 3;
	printf("Введите х \n");
	scanf("%.4f", &x);
	printf("отношение = %.4f произведение = %.4f разность квадратов = %.4f удвоенная сумма = %.4f \n\n",fb(x)/fa(x), fa(x) * fb(x), fa(x) * fa(x) - fb(x) * fb(x), 2 * (fa(x) + fb(x)));
	
}



double fa(double x) {

	if (x <= 3)
	{
		return(pow(x, 2) - (3 * x) + 9);
	}
	else
	{
		return(1 / (pow(x, 3) + 3));
	}

}


double fb(double x)
{
	return (x * exp(sin(pow(x, 2))));
	
}

