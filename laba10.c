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
	printf("произведение = %.4f разность квадратов = %.4f удвоенная сумма = %.4f \n\n", fa(x) * fb(x), pow(fa(x), 2) - pow(fb(x), 2), 2 * (fa(x) + fb(x)));
	
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

