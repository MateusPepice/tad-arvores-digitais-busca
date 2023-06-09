#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 

typedef struct No No;

/*Tipos que podem ser chaves: INT, CHAR, UNSIGNED*/
int bits(int chave, int nivel);

No* criar_arvore();
void destruir_arvore(No **p);

No* inserir (No* p, int chave);
No* inserir_rec(No *p, int chave, int nivel);

No* buscar (No* p, int busca);
No* buscar_rec(No *p, int busca, int nivel);

No* remover_chave(No *p, int chave);

void imprimir_bits(int chave);
void imprimir_arvore (No* p, int nivel);

