#include <stdio.h>

void main(void){
	int linha, coluna;
	float tabela[3][5] = {{1.0, 2.0, 3.0, 4.0, 5.0},
						  {6.0, 7.0, 8.0, 9.0, 10.0},
						  {11.0, 12.0, 13.0, 14.0, 15.0}};
	for (linha=0; linha < 3; linha++)
		for(coluna=0; coluna < 5; coluna++)
			printf("tabela[%d][%d] = %f\n", linha, coluna, tabela[linha][coluna]);
	}
