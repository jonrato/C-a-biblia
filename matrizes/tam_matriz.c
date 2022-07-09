#include <stdio.h>

void main(void){
    int notas[100];
    float salario[100];
    char strings[100];

    printf("Memoria para conter int notas[100] %zu bytes\n", sizeof(notas));
    printf("Memoria para conter float salario[100] %zu bytes\n", sizeof(salario));
    printf("Memoria para conter char strings[100] %zu bytes\n", sizeof(strings));
}