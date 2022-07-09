#include <stdio.h>

void exibe_matriz(int valores[], int num_elementos){
	int i;

	for(i=0;i<num_elementos;i++)
		printf("%d\n", valores[i]);
}

void main(void){
	int notas[5] = {38,49,33,21,203};
	exibe_matriz(notas, 5);
}