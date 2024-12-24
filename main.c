#include <stdio.h>
#include "funcoes.h"

// Função para exibir o menu principal
void exibir_menu_principal() {
    printf("\n=== Conversor de Unidades ===\n");
    printf("Escolha o tipo de conversor:\n");
    printf("1. Conversor de Comprimento\n");
    printf("2. Conversor de Temperatura\n");
    printf("3. Conversor de Velocidade\n");
    printf("4. Conversor de Potência\n");
    printf("5. Conversor de Massa\n");
    printf("6. Conversor de Tempo\n");
    printf("7. Conversor de Área\n");
    printf("8. Executar Testes de Conversores\n");
    printf("0. Sair\n");
    printf("Digite a opção desejada: ");
}

// Função para validar entrada do usuário
int ler_opcao() {
    int opcao;
    if (scanf("%d", &opcao) != 1) {
        printf("Entrada inválida! Por favor, insira um número.\n");
        while (getchar() != '\n'); // Limpa o buffer
        return -1; // Indica entrada inválida
    }
    return opcao;
}

int main() {
    int opcao_principal;

    do {
        // Exibe o menu principal
        exibir_menu_principal();

        // Lê a entrada do usuário
        opcao_principal = ler_opcao();

        // Verifica se a entrada foi válida
        if (opcao_principal == -1) {
            continue; // Volta ao menu principal
        }

        // Processa a opção escolhida
        switch (opcao_principal) {
            case 1:
                executar_conversor_comprimento();
                break;
            case 2:
                executar_conversor_temperatura();
                break;
            case 3:
                executar_conversor_velocidade();
                break;
            case 4:
                executar_conversor_potencia();
                break;
            case 5:
                executar_conversor_massa();
                break;
            case 6:
                executar_conversor_tempo();
                break;
            case 7:
                executar_conversor_area();
                break;
            case 8:
                testar_conversores(); // Executa os testes
                break;
            case 0:
                printf("Saindo do programa. Obrigado!\n");
                break;
            default:
                printf("Opção inválida! Escolha um número entre 0 e 8.\n");
        }
    } while (opcao_principal != 0);

    return 0;
}
