#include <stdio.h>
#include <stdlib.h>

int main(){
	char palavras[20];

	printf("Digite uma palavra:\n");
	scanf("%[^\n]", palavras);

	printf("\n\n%s\n\n", palavras);

	return 0;
}