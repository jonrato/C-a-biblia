#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i, vet1[25], vet2[25], vet3[25];

	srand(time(NULL));

	for(i=0;i<25;i++){
		vet1[i] = rand() % 100;
		vet2[i] = rand() % 100;
	}

	for(i=0;i<25;i++){
		vet3[i] = vet1[i] + vet2[i];
	}

	printf("\nVetor 1:\n");
	for(i=0;i<25;i++){
		printf("%5d", vet1[i]);
	}

	printf("\nVetor 2:\n");
	for(i=0;i<25;i++){
		printf("%5d", vet2[i]);
	}

	printf("\nVetor 3:\n");
	for(i=0;i<25;i++){
		printf("%5d", vet3[i]);
	}


	return 0;
}