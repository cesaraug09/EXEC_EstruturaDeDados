#include "registra.h"

void Registra(Registro *Pessoa, int k) {
    printf("\n\n");
    printf("___________________FUNCIONARIO %d___________________\n", k+1);
    printf("| Nome: ");
    fgets(Pessoa[k].nome, sizeof(Pessoa[k].nome), stdin);
    size_t len = strlen(Pessoa[k].nome);
    if (len > 0 && Pessoa[k].nome[len-1] == '\n') {
        Pessoa[k].nome[len-1] = '\0';
    }
    printf("____________________________________________________\n");
    printf("| Idade: ");
    scanf("%d", &(Pessoa[k].idade));
    printf("____________________________________________________\n");
    printf("| CPF: ");
    scanf("%lld", &(Pessoa[k].cpf));
    printf("____________________________________________________\n");
    printf("| Email: ");
    getchar();
    fgets(Pessoa[k].email, sizeof(Pessoa[k].email), stdin);
    len = strlen(Pessoa[k].email);
    if (len > 0 && Pessoa[k].email[len-1] == '\n') {
        Pessoa[k].email[len-1] = '\0';
    }

    printf("____________________________________________________\n\n");
    printf("Aperte ENTER para prosseguir...");
    getchar();
}
