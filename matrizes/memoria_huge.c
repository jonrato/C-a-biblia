#include <stdio.h>
#include <malloc.h>

void main(void){
	int i;
	float huge *valores;

	if((valores = (float huge *) malloc(17000, sizeof(float))) == NULL)
		printf("Erro ao alocar a matriz huge\n");
	else{
		printf("Preenchendo a matriz\n");
		for(i=0;i<17000;i++)
			printf("%8.1f", valores[i]);
		free(valores);
	}
}