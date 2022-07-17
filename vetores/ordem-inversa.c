#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, opcao;
	float vetor[10];

	for(i=0;i<5;i++){
		printf("Digite o valor da posicao %d\n", i);
		scanf("%f", &vetor[i]);
	}
	do{
		printf("\n 0-Finalizar\n1-Imprimir Vetor\n2-Imp. Vetor Invertido\n");
		scanf("%d",&opcao);

		switch(opcao){
			case 0:
				printf("Finalizando...\n");
				break;
			case 1:
				for(i=0;i<5;i++){
					printf("%.2f\n", vetor[i]);
				}
				printf("\n");
				break;
			case 2:
				for(i=4;i>=0;i--){
					printf("%.2f\n", vetor[i]);
				}
				printf("\n");
				break;
			default:
				printf("Opcao invalida");
		}
	}while(opcao != 0);
}