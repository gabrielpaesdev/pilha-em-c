#ifndef PILHA_H
#define PILHA_H

#define MAX 128

typedef struct {
    int dados;
} noPilha;

typedef struct {
    noPilha pilha[MAX];
    int topo;
} Pilha;

void inicializarPilha(Pilha *p);
int vazia(Pilha *p);
int cheia(Pilha *p);
int push(Pilha *p, int valor);
int pop(Pilha *p, int *valor);
void listar(Pilha *p);

#endif
