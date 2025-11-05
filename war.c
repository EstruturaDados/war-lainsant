#include <stdio.h>   // Biblioteca para entrada e saída
#include <string.h>  // Biblioteca para manipulação de strings

// -----------------------------------------------------------
// Estrutura que representa um território
// Armazena nome, cor do exército e quantidade de tropas
// -----------------------------------------------------------
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {

    // -----------------------------------------------------------
    // Vetor que armazenará 5 territórios
    // -----------------------------------------------------------
    struct Territorio territorios[5];

    // -----------------------------------------------------------
    // Entrada dos dados
    // O usuário preencherá 5 territórios
    // -----------------------------------------------------------
    for (int i = 0; i < 5; i++) {
        printf("\n=== Cadastro do Território %d ===\n", i + 1);

        printf("Digite o nome do território: ");
        scanf("%s", territorios[i].nome);

        printf("Digite a cor do exército: ");
        scanf("%s", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // -----------------------------------------------------------
    // Exibição dos dados após o cadastro
    // -----------------------------------------------------------
    printf("\n\n=== DADOS DOS TERRITÓRIOS CADASTRADOS ===\n");

    for (int i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].cor);
        printf("Quantidade de Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}
