#include <stdio.h>
#include <stdlib.h>
#include "Remove.h"
#include "registraEstatica.h"
#include "ImprimeFuncionarios.h"

void Status(Registro *Pessoa, int TAMANHO){
	int k; int n; int i;
	for(k=0;k<TAMANHO;k++){
		ImprimeFuncionarios(Pessoa, k);
	}
	printf("\nQUAL FUNCIONARIO DESEJA EDITAR:\n");
	scanf("%d", &n);
	n=n-1;
	printf("\nDeseja Alterar:\n");
	printf("1 - NOME; 2 - IDADE; 3 - CPF; 4 - EMAIL\n");
	scanf("%d", &i);
	
	printf("Digite a Alteracao:");
	switch (i){
        case 1:
        	fflush(stdin);
    		gets(Pessoa[n].nome);
        break;
        
        case 2:
			scanf("%d", &(Pessoa[n].idade));
        break;
            
        case 3:
			scanf("%lld", &(Pessoa[n].cpf));
            break;

        case 4:
        	fflush(stdin);
			gets(Pessoa[n].email);
            break;
	
        default:
        	printf("Numero Invalido");
            break;
    }
}
