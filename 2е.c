#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    double mas[300];
	int i;
	double a, b, zn;
	printf("\nVvedite a: ");
	scanf("%lf", &a);
	printf("\nVvedite b: ");
	scanf("%lf", &b);
	
	for(i = 0, zn = a; zn < b; i++, zn = zn + 0.1) {
		mas[i] = zn;
		printf("\n\tmas[%d] = %.1lf", i, mas[i]);
	}
	
	return 0;
}
