#include <stdio.h>
#include <stdlib.h>

void *bsearch(const void *key, const void *base, size_t nitems, size_t size, int (*compar)(const void *, const void *));

int compare_int(int *a, int *b){
	return (*a - *b);
};


int compare_float(float *a, float *b){
	return((*a == *b) ? 0 : 1);
}

int main(void){
	int int_valores[] = {1,3,2,4,5};
	float float_valores[] = {2.3,1.4,3.5,2.6,3.2};
	int *int_ptr=0, int_valor=2, elementos = 5;
	float *float_ptr=0, float_valor = 33.3;

	int_ptr = bsearch(&int_valor, int_valores, elementos, sizeof(int),
		(int (*) (const void *, const void *)) compare_int);
	if(*int_ptr)
		printf("Valor %d encontrado\n", int_valor);
	else
		printf("Valor %d nao encontrado\n", int_valor);

	float_ptr = bsearch(&float_valor, float_valores, elementos, sizeof(float),
		(int (*) (const void *, const void *)) compare_float);
	if(*float_ptr)
		printf("Valor %3.1f encontrado\n", float_valor);

	else
		printf("Valor %3.1f nao encontrado\n", float_valor);
}