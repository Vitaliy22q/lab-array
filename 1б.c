#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas[300];
	int i;
	srand (time(0));
	for(i=0;i < 100;i++){
		mas [i] = (rand () % 200)-100;
		printf ("\nmas[%d]=%d",i,mas[i]);
	} 
	
	return 0;
}
