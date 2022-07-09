#include <stdio.h>
#include <stdlib.h>

void algor_shell(int matriz[], int tamanho){
	int temp, distancia, i, permuta_realizada;
	distancia=tamanho/2;
	do{
		do{
			permuta_realizada=0;
			for(i=0;i<tamanho-distancia;i++)
				if(matriz[i]>matriz[i+distancia]){
					temp=matriz[i];
					matriz[i]=matriz[i+distancia];
					matriz[i+distancia]=temp;
					permuta_realizada=1;
				}
		}
		while(permuta_realizada);
	}
	while(distancia=distancia/2);
}

void main(void){
	int valores[50],i;
	for(i=0;i<50;i++)
		valores[i]=rand()%100;
	algor_shell(valores, 50);
	for(i=0;i<50;i++)
		printf("%d\n", valores[i]);
}