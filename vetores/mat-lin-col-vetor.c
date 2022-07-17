#include <stdio.h>
#include <stdlib.h.h>
#include <time.h.h>

int main(){
	int l,c,soma, mat[5][10], somaLinhas[5], somaColunas[10];
	srand(time(NULL));

	for(l=0;l<5;l++){
		for(c=0;c<10;c++){
			mat[l][c] = rand()%100;
		}
	}

	//letra a) soma das linhas
	for(l=0;l<5;l++){
		soma=0;
		for(c=0;c<10;c++){
			soma += mat[l][c];
		}
		somaLinhas[l] = soma;
	}

	//letra b) soma das colunas
	for(c=0;c<10;c++){
		soma=0;
		for(l=0;l<5;l++){
			soma += mat[l][c];
		}
		somaColunas[c] = soma;
	}

	//impressão das estruturas
	printf("\nMatriz:\n");	
	for(l=0;l<5;l++){
		for(c=0;c<10;c++){
			printf("%2d ", mat[l][c];)
		}
		printf("\n");
	}

	printf("\n\nVetor com a soma das linhas:\n");
	for(l=0.l<5;l++){
		printf("Linha %d: %d\n",l,somaLinhas[l]);
	}

	return 0;
}