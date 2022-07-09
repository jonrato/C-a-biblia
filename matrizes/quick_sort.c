#include <stdio.h>
#include <stdlib.h>

void quick_sort(int matriz[], int primeiro, int ultimo){
	int temp, baixo, alto, separador_lista;
	baixo=primeiro;
	alto=ultimo;
	separador_lista=matriz[(primeiro+ultimo)/2];
	do{
		while(matriz[baixo]<separador_lista)
			baixo++;
		while(matriz[alto]>separador_lista)
			alto--;
		if(baixo<=alto){
			temp=matriz[baixo];
			matriz[baixo++]=matriz[alto];
			matriz[alto--]=temp;
		}
	}
	while(baixo<=alto);
	if(primeiro<alto)
		quick_sort(matriz,primeiro,alto);
	if(baixo<ultimo)
		quick_sort(matriz,baixo,ultimo);
}

void main(void){
	int valores[100], i;
	for(i=0;i<100;i++)
		valores[i]=rand()%100;
	quick_sort(valores,0,99);
	for(i=0;i<100;i++)
		printf("%d\n", valores[i]);
}