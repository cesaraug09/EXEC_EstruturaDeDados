#include <stdio.h>
#include "registraEstatica.h"
#include "ImprimeFuncionarios.h"

void ImprimeFuncionarios(Registro *Pessoa, int k){
	printf("%d:__________________________________________________________________________________\n", k+1);
	printf("| Nome: %s                 | Idade: %d   | CPF: %lld    | Email: %s    \n", Pessoa[k].nome, Pessoa[k].idade, Pessoa[k].cpf, Pessoa[k].email);
	printf("____________________________________________________________________________________\n");
}


