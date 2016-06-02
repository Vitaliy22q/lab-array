#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i;
	double mas[300], zn;

	

	
	for(i = 0, zn = -10; zn < 10; zn = zn + 0.1, i++) {
		mas[i] = zn;
		printf("\t mas[%d] = %.1lf\n", i, zn);
	}	
	
	return 0;
}
