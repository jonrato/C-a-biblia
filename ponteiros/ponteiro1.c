#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 10;
	int *p;

	p=&num;
	printf("Valor do numero %d\n\n", num);
	printf("Endereco do numero %p\n\n", &num);
	printf("Valor do p %p\n\n", p);
	printf("Endereco de p %p\n\n", &p);
	printf("Valor apontado por p: %d\n\n", *p);
}