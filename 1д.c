#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double mas [100],n;
	int i;
	printf("\nVvedite n: ");
	scanf("%lf", &n);
	srand(time(0));
	for (i=0;i<10;i++){
		mas[i]= ((float)rand() / RAND_MAX) * n;
		printf("\n\tmas[%d] = %lf", i, mas[i]);
	}
	return 0;
}
