#include "pilha.h"
#include <stdio.h>

void inicializarPilha(Pilha *p){
	p->topo = -1;
}

int vazia(Pilha *p){
	return p->topo == -1;
}

int cheia(Pilha *p){
	return p->topo == MAX - 1;
}

int push(Pilha *p, int valor){
	if(cheia(p)) return 0;
	p->topo++;
	p->pilha[p->topo].dados = valor;
	return 1;
}

int pop(Pilha *p, int *valor){
	if(vazia(p)) return 0;
	*valor = p->pilha[p->topo].dados;
	p->topo--;
	return 1;
}

void listar(Pilha *p){
	if(vazia(p)){
		printf("\nPilha vazia!\n");
		return;
	}
	printf("\nConteudo da pilha (topo -> base):\n|");
	for(int i = p->topo; i >= 0; i--){
		printf("%d|", p->pilha[i].dados);
	}
	printf("\n");
}
