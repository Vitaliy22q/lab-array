#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,i;
	int mas [10];
	printf("vvedite a:");
	scanf ("%d",&a);
	printf("vvedite b:");
	scanf ("%d",&b);
	srand (time(0));
	for(i=0;i<10;i++){
		mas[i] =(rand()%(b-a))+a;
		printf("\nmas[%d] = %d", i, mas[i]);
		
	} 	
	return 0;
}
