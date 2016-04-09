#include <stdio.h>
#include <math.h>

double pi (void);
int main (void) {
	
		printf("Valor de PI: %f\n", pi() );

}

double pi(void) {
	int valor =  9, n = 0,s = 6;
	double x = 1 ,valor_pi = 0.0;

	while (n <= valor)
	{
		valor_pi = s * x /2;
		x = sqrt(2 - sqrt (4 - x * x));
		s = s*2;
		n ++;

	}

	return valor_pi;

}
