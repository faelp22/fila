/* 
 * File:   fila.c
 * Author: Isael Sousa <faelp22@hotmail.com>
 *
 * Created on 30 de Setembro de 2015, 11:36
 */

#include <stdio.h>
#include "fila.h"

void inicializa(Fila *p) 
{
    p->inicio = 0;
    p->fim = -1;
    return;
}

void insere(Fila *p, int v) 
{
    if (p->fim >= TAMANHO - 1) 
    {
        verifica(p);
        return;
    }
    p->fim++;
    p->fila[p->fim] = v;
    return;
}

void retira(Fila *p) 
{
    if (p->fim > -1 && p->inicio < p->fim) 
    {
        p->fila[p->inicio] = 0;
        p->inicio++;
        return;
    }
    verifica(p);
    return;
}

void verifica(Fila *p) 
{
    (p->fim >= TAMANHO - 1) ? printf("Fila cheia\n") :
            (p->fim == -1) ? printf("Fila vazia\n") :
            printf("Ainda cabe %d \n", TAMANHO - 1 - p->fim);
    return;
}

void primeiro_elemento(Fila *p) 
{
    printf("primeiro elemento %d \n", p->fila[p->inicio]);
    return;
}

void ultimo_elemento(Fila *p) 
{
    printf("primeiro elemento %d \n", p->fila[p->fim]);
    return;
}

void imprime_fila(Fila *p) 
{
	if(p->fim > -1 && p->inicio == p->fim) 
	{
		verifica(p);
		return;
	}

    printf("Conteudo da fila\n");
    for (int i = p->inicio; i <= p->fim; i++) 
        printf("posicao %d valor %d \n", i, p->fila[i]);
    return;
}

void inverte_fila(Fila *p) 
{
    int aux = 0;
    for (int i = p->inicio; i <= p->fim / 2; i++) //como na pilha preciso percorrer apenas a metade
    {
        aux = p->fila[i];
        p->fila[i] = p->fila[p->fim - i];
        p->fila[p->fim - i] = aux;
    }
    return;
}