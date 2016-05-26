#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	double mas[100],n,zn;
	
	printf("\nVvedite n: ");
	scanf("%lf", &n);
	for(i=0,n=1;zn<n;zn=zn+0.1,i++){
		mas[i] = zn;
		printf("\t mas[%d] = %.1lf\n", i, zn);
	}
	return 0;
}
