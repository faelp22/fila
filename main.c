/*
 * File:   main.cpp
 * Author: Isael Sousa <faelp22@gmail.com>
 *
 * Created on 30 de Setembro de 2015, 11:36
 */

#include <stdio.h>
#include "fila.h"

int main(int argc, char const *argv[])
{
	Fila f1; inicializa(&f1);

	insere(&f1, 12);
	printf("posicao do inicio %d posicao do fim %d\n", f1.inicio, f1.fim);
	insere(&f1, 42);
	printf("posicao do inicio %d posicao do fim %d\n", f1.inicio, f1.fim);
	insere(&f1, 67);
	printf("posicao do inicio %d posicao do fim %d\n", f1.inicio, f1.fim);
	insere(&f1, 34);
	printf("posicao do inicio %d posicao do fim %d\n", f1.inicio, f1.fim);
	verifica(&f1);
	insere(&f1, 13);
	printf("posicao do inicio %d posicao do fim %d\n", f1.inicio, f1.fim);
	insere(&f1, 89);
	printf("posicao do inicio %d posicao do fim %d\n", f1.inicio, f1.fim);
	insere(&f1, 36);
	printf("posicao do inicio %d posicao do fim %d\n", f1.inicio, f1.fim);
	insere(&f1, 90);
	printf("posicao do inicio %d posicao do fim %d\n", f1.inicio, f1.fim);

	imprime_fila(&f1);
	printf("invertido \n");
	inverte_fila(&f1);
	imprime_fila(&f1);
	verifica(&f1);
	insere(&f1, 55);
	printf("posicao do inicio %d posicao do fim %d\n", f1.inicio, f1.fim);
	insere(&f1, 4);
	printf("posicao do inicio %d posicao do fim %d\n", f1.inicio, f1.fim);
	verifica(&f1);
	insere(&f1, 27);
	printf("posicao do inicio %d posicao do fim %d\n", f1.inicio, f1.fim);
	insere(&f1, 87);
	printf("posicao do inicio %d posicao do fim %d\n", f1.inicio, f1.fim);

	printf("invertendo de novo\n");
	inverte_fila(&f1);
	imprime_fila(&f1);

	retira(&f1);
	printf("posicao do inicio %d posicao do fim %d\n", f1.inicio, f1.fim);
	imprime_fila(&f1);
	verifica(&f1);
	retira(&f1);
	printf("posicao do inicio %d posicao do fim %d\n", f1.inicio, f1.fim);
	imprime_fila(&f1);
	retira(&f1);
	printf("posicao do inicio %d posicao do fim %d\n", f1.inicio, f1.fim);
	imprime_fila(&f1);
	retira(&f1);
	printf("posicao do inicio %d posicao do fim %d\n", f1.inicio, f1.fim);
	imprime_fila(&f1);
	verifica(&f1);
	retira(&f1);
	retira(&f1);
	retira(&f1);
	retira(&f1);
	retira(&f1);
	retira(&f1);
	retira(&f1);
	imprime_fila(&f1);
	verifica(&f1);
	printf("posicao do inicio %d posicao do fim %d\n", f1.inicio, f1.fim);

	return 0;
}
