#include <stdio.h>
#include <stdlib.h>
#include "Remove.h"
#include "registraEstatica.h"
#include "ImprimeFuncionarios.h"

void Remove(Registro *Pessoa, int TAMANHO){
	int k;
	for(k=0;k<TAMANHO;k++){
		ImprimeFuncionarios(Pessoa, k);
	}
	printf("\nDigite o NUMERO do FUNCIONARIO que deseja REMOVER:\n");
	scanf("%d", &k);
	k= k-1;
	if(k<TAMANHO){
	strcpy(Pessoa[k].nome, "VAGA");
    Pessoa[k].idade = 0;
    Pessoa[k].cpf = 0;
    strcpy(Pessoa[k].email, "XXXXXXXXXX");
	ImprimeFuncionarios(Pessoa, k);
	
	char prosseguir;
	fflush(stdin);
    scanf("%c", &prosseguir);
	}
	else {
		LimpaTela();
		Remove(Pessoa, TAMANHO);
	}
}
