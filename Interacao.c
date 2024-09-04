#include <stdio.h>
#include <stdlib.h>
#include "Interacao.h"
#include "registraEstatica.h"

int Interacao(){
	int opcao;
	scanf("%d", &opcao);
	
	switch (opcao){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 9:
        	exit(0);
            break;

        default:
            printf("Opcao invalida.\n");
            Interacao();
            break;
    }
    return opcao;
}
