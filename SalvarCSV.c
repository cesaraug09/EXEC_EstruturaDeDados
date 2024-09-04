#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SalvarCSV.h"
#include "registra.h"

void SalvarCSV(char nomearquivo[50], Registro *pessoa, int tamanho) {
    FILE *arquivo = fopen(nomearquivo, "w");

    if (arquivo == NULL) {
        perror("Não foi possível abrir o arquivo");
        return;
    }

    fprintf(arquivo, "DADOS SALVOS:\n");

	int i;
    for (i = 0; i < tamanho; i++) {
        fprintf(arquivo, "usuario %d: nome: %s, idade: %d, cpf: %lld, email: %s\n", i+1, pessoa[i].nome, pessoa[i].idade, pessoa[i].cpf, pessoa[i].email);
    }
    fclose(arquivo);
}
