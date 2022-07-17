#include <stdlib.h>
#include <stdio.h>

void *lfind(const void *elemento, void *base, size_t *num_itens, size_t
	largura_elemento, int(*compare)(const void *, const void*));

int compare_int(int *a, int *b){
	return(*a - *b);
}

int compare_float(float *a, float *b){
	return ((*a == *b) ? 0 : 1);
}

void main(void){
	int int_valores[] = {1,3,2,5,4};
	float float_valores[] = {1.1,3.2,2.7,3.5,4.2};

	int *int_ptr, int_valor = 2, elementos = 5;
	float *float_ptr, float_valor = 33.5;
	int_ptr = lfind(&int_valor, &int_valores,&elementos, sizeof(int),
	(int (*) (const void *, const void *)) compare_int);
	if(*int_ptr)
		printf("Valor %d encontrado\n", int_valor);
	else
		printf("Valor %d nao encontrado\n", int_valor);
	float_ptr = (&float_valor, float_valores, &elementos, sizeof(float),
		(int (*) (const void *, const void *)) compare_float);
	if(*float_ptr)
		printf("Valor %3.1f encontrado\n", float_valor);
	else
		printf("Valor %3.1f nao encontrado\n", float_valor);
}