#include "pilha.h"
#include <stdio.h>


int main(){
	Pilha p;
	inicializarPilha(&p);
	int i = 0;
	int dado = 0;
	do{
		printf("\nBEM-VINDO AO GERENCIAMENTO DE PILHA, O QUE DESEJA FAZER?\n");
		printf("1- EMPILHAR (PUSH)\n2- DESEMPILHAR (POP)\n3- LISTAR\n4- SAIR\n");
		scanf("%d", &i);
		
		switch(i){
			case 1:{
				printf("Digite o valor a ser inserido: ");
				scanf("%d", &dado);
				printf("\nExecutando push...\n");
				if(push(&p, dado)){
					printf("Valor inserido!\n");
				}else{
					printf("Pilha cheia!\n");
				}
				dado = 0;
				break;		
			}
			case 2:{
				printf("\nExecutando pop...\n");
				if(pop(&p, &dado)){
					printf("Valor removido: %d\n", dado);
				}else{
					printf("Pilha vazia!\n");
				}
				break;
			}
			case 3:{
                listar(&p);
                break;
            }
			}
			}
	while(i != 4);

	return 0;
}
