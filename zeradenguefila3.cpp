#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct denunciante{
	
		char Nome[50];
		long int cpf;
		char endereco[80];
			
	};
	

struct fila{
	
		int inicio, final, qtde;
		struct denunciante dados [MAX];
	
	};
		
typedef struct fila Fila;

void CriarFila(){
	Fila *fi = (Fila*) malloc(sizeof(struct fila));
	fi->inicio = 0;
	fi->final = 0;
    fi->qtde = 0;
	
}



int main(int argc, char** argv) {

	
	return 0;	
}
