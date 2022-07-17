#include <stdlib.h>
#include <stdio.h>

int compare_int(int *a, int *b){
	if(*a < *b)
		return(-1);
	else if(*a == *b)
		return (0);
	else
		return(1);
}

int compare_float(float *a, float *b){
	if(*a < *b)
		return(-1);
	else if(*a == *b)
		return (0);
	else
		return(1);
}

void main(void){
	int int_valores = {51,22,3,25,43};
	float float_valores = {2.4,22.3,22.5,14.6,18.5};
	int elementos = 5, i;

	qsort(int_valores, elementos, sizeof(int),
		(int (*) (const void *, const void *)) compare_int);

	for(i=0;i<elementos;i++)
		printf("%d", int_valores[i]);
	putchar('\n');
	qsort(float_valores, elementos, sizeof(float),
		(int (*) (const void *, const void *)) compare_float);
	for(i=0;i<elementos;i++)
		printf("%4.1f ", float_valores[i])	;

}