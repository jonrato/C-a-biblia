#include <stdio.h>
#include <stdlib.h>

void algortimo_bolha(int matriz[], int tamanho){
	int temp, i,j;

	for(i=0;i<tamanho;i++)
		for(j=0;j<tamanho;j++)
			if(matriz[i]<matriz[j]){
				temp=matriz[i];
				matriz[i]=matriz[j];
				matriz[j]=temp;
			}
}

void main(void){
	int valores[30],i;

	for(i=0;i<30;i++)
		valores[i]=rand()%100;
	algortimo_bolha(valores,30);
	for(i=0;i<30;i++)
		printf("%d\n",valores[i] );
}