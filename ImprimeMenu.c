#include <stdio.h>
#include "ImprimeMenu.h"
#include "limpa.h"

int ImprimeMenu(){
	LimpaTela();
	printf("\n\n\n");
	printf("___________________________________________\n");
    printf("|***** BEM VINDO AO PROGRAMA EMPRESA *****|\n");
    printf("|                                         |\n");
    printf("|___________________MENU__________________|\n");
    printf("| 1 - Adicionar       | 3 - Mostrar Lista |\n");
    printf("| 2 - Remover         | 4 - Trocar Status |\n");
    printf("| 9 - Sair            |                   |\n");
    printf("|_____________________|___________________|\n");
    printf("\n");
    return 0;
}

