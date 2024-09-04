#include <stdio.h>
#include <stdlib.h>
#include "ImprimeMenu.h"
#include "ImprimeFuncionarios.h"
#include "registraEstatica.h"
#include "limpa.h"
#include "Remove.h"
#include "SalvarCSV.h"

void Registra();
const int TAMANHO =10;

void main() {
	
	ImprimeMenu();
	
	int opcao;
	int k;
	Registro Pessoa[TAMANHO];
	
	
	do{scanf("%d", &opcao);
	switch (opcao){
        case 1:
			for(k=0;k<TAMANHO;k++){
			LimpaTela();
			Registra(&Pessoa, k);
			}
        break;
        
        case 2:
        	LimpaTela();
        	Remove(&Pessoa, k, TAMANHO);
        break;
            
        case 3:
        	LimpaTela();
        	for(k=0;k<TAMANHO;k++){
			ImprimeFuncionarios(Pessoa, k);
			}
			char prosseguir;
			fflush(stdin);
    		scanf("%c", &prosseguir);
            break;

        case 4:
        	LimpaTela();
        	Status(&Pessoa, k);
            break;
        case 9:
        	exit(0);
            break;

        default:
        	SalvarCSV("Lista_Funcionarios", Pessoa, TAMANHO);
            break;
    }
	ImprimeMenu();
	}while(opcao!=9);

	getch();
}




