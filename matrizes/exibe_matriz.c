#include <stdio.h>
#define TAM_MATRIZ 5
void main(void){
	int notas[TAM_MATRIZ] = {22, 33, 134, 225, 14};
	int i;

	printf("valores da matriz\n");
	for(i=0;i<TAM_MATRIZ;i++)
		printf("notas[%d] %d\n", i, notas[i]);
}