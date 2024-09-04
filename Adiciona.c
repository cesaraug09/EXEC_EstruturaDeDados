#include "Adiciona.h"
#include <stdio.h>
#include "limpa.h"


int Adiciona(){
    LimpaTela();

    char nome[50];
    int idade;
    char email[100];
    long long int cpf;

    printf("\n************************************************\n");
    printf("| Nome: ");
    fflush(stdin);
    gets(nome);

    printf("************************************************\n");
    printf("| Idade: ");
    scanf("%d", &idade);

    printf("************************************************\n");
    printf("| CPF: ");
    scanf("%lld", &cpf);

    printf("************************************************\n");
    printf("| Email: ");
    fflush(stdin);
	gets(email);
    printf("************************************************\n\n");


    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("CPF: %lld\n", cpf);
    printf("Email: %s\n", email);

    return 0;
}

