#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas[100], i, a, b, zn;
	
	printf("\nVvedite a: ");
	scanf("%d", &a);
	printf("\nVvedite b: ");
	scanf("%d", &b);
	
	for(i = 0, zn = b; zn <= a; i++, zn++) {
		mas[i] = zn;
		printf("\nmas[%d] = %d", i, mas[i]);
	}	
	
	return 0;
}
	

