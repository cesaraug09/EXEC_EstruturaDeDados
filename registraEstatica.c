#include <stdio.h>
#include "registraEstatica.h"

void Registra(Registro *Pessoa, int k){
	fflush(stdin);
	printf("\n\n");
	printf("___________________FUNCIONARIO %d___________________\n", k+1);
    printf("| Nome: ");
    fflush(stdin);
    gets(Pessoa[k].nome);

    printf("____________________________________________________\n");
    printf("| Idade: ");
    scanf("%d", &(Pessoa[k].idade));

    printf("____________________________________________________\n");
    printf("| CPF: ");
    scanf("%lld", &(Pessoa[k].cpf));

    printf("____________________________________________________\n");
    printf("| Email: ");
    fflush(stdin);
	gets(Pessoa[k].email);
    printf("____________________________________________________\n\n");
    printf("Aperte ENTER para prosseguir...");
    char prosseguir;
    scanf("%c", &prosseguir);
}

