/* 
 * File:   fila.h
 * Author: Isael Sousa <faelp22@hotmail.com>
 *
 * Created on 30 de Setembro de 2015, 11:36
 */

#ifndef FILA_H

#define TAMANHO 10

typedef struct fila
{
	int fila[TAMANHO];
	int inicio, fim;
}Fila;

void inicializa(Fila *p);

void insere(Fila *p, int v);

void retira(Fila *p);

void verifica(Fila *p);

void ver_vazia(Fila *p);

void primeiro_elemento(Fila *p);

void ultimo_elemento(Fila *p);

void imprime_fila(Fila *p);

void inverte_fila(Fila *p);

#endif