#include <stdio.h>
#include <stdlib.h>

void algor_selecao(int matriz[], int tamanho){
	int temp, atual,j;
	for(atual=0;atual<tamanho;atual++)
		for(j=atual+1;j<tamanho;j++)
			if(matriz[atual]>matriz[j]){
				temp=matriz[atual];
				matriz[atual]=matriz[j];
				matriz[j]=temp;
			}
}

void main(void){
	int valores[30],i;

	for(i=0;i<30;i++){
		valores[i] = rand()%100;
		algor_selecao(valores,30);
		for(i=0;i<30;i++)
			printf("%d\n", valores[i]);
	}
}