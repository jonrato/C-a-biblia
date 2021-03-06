#include <stdio.h>

int pesq_bin(int matriz[], int valor, int tamanho){
	int achado = 0;
	int alto = tamanho, baixo=0,med;

	med = (alto+baixo)/2;
	printf("\n\nProcurando %d\n", valor);
	while ((!achado) && (alto=baixo)){
		printf("baixo %d, médio %d, alto %d\n", baixo, med, alto);
		if(valor == matriz[med])
			achado=1;
		else if(valor<matriz[med])
			alto=med-1;
		else
			baixo=med+1;
		med=(alto+baixo)/2;
	}
	return((achado)?med:-1);
}

int main(void){
	int matriz[100],i;

	for(i=0;i<100;i++){
		matriz[i] = i;
		printf("Resultado da pesquisa %d\n", pesq_bin(matriz, 33,100));
		printf("Resultado da pesquisa %d\n", pesq_bin(matriz, 75,100));
		printf("Resultado da pesquisa %d\n", pesq_bin(matriz, 1,100));
		printf("Resultado da pesquisa %d\n", pesq_bin(matriz, 1001,100));
	}
}