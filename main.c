#include <stdio.h>
#include "funcoes.h"


// Funções auxiliares
void menu_conversor_comprimento();
void exibir_menu_comprimento();


// Funcoes do conversor de comprimeto:

// Funções de conversão
float metros_para_centimetros(float metros) {
    return metros * 100;
}

float metros_para_milimetros(float metros) {
    return metros * 1000;
}

float centimetros_para_metros(float centimetros) {
    return centimetros / 100;
}

float milimetros_para_metros(float milimetros) {
    return milimetros / 1000;
}

// Função para exibir o menu de conversão de comprimento
void exibir_menu_comprimento() {
    printf("\n=== Conversor de Comprimento ===\n");
    printf("1. Metros para Centímetros\n");
    printf("2. Metros para Milímetros\n");
    printf("3. Centímetros para Metros\n");
    printf("4. Milímetros para Metros\n");
    printf("0. Voltar ao Menu Principal\n");
    printf("Digite a opção desejada: ");
}

// Função para o menu de conversão de comprimento
void menu_conversor_comprimento() {
    int opcao;
    float valor, resultado;

    do {
        exibir_menu_comprimento(); // Exibe o menu de comprimento
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Voltando ao Menu Principal...\n");
            break;
        }

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);

            switch (opcao) {
                case 1:
                    resultado = metros_para_centimetros(valor);
                    printf("%.2f metros equivalem a %.2f centímetros.\n", valor, resultado);
                    break;
                case 2:
                    resultado = metros_para_milimetros(valor);
                    printf("%.2f metros equivalem a %.2f milímetros.\n", valor, resultado);
                    break;
                case 3:
                    resultado = centimetros_para_metros(valor);
                    printf("%.2f centímetros equivalem a %.2f metros.\n", valor, resultado);
                    break;
                case 4:
                    resultado = milimetros_para_metros(valor);
                    printf("%.2f milímetros equivalem a %.2f metros.\n", valor, resultado);
                    break;
            }
        } else {
            printf("Opção inválida! Escolha entre 1 e 4 ou 0 para voltar.\n");
        }
    } while (1);
}

// Funções do conversor de Temperatura:

// Funções de conversão

// Função para exibir o menu de conversão de temperatura

// Função para o menu de conversão de temperatura

int main() {
    int opcao_principal;
    do {
        // Menu principal
        printf("\n=== Conversor de Unidades ===\n");
        printf("Escolha o tipo de conversor:\n");
        printf("1. Conversor de Comprimento\n");
        printf("2. Conversor de Temperatura\n");
        printf("0. Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao_principal);

        switch (opcao_principal) {
            case 1:
                menu_conversor_comprimento();
                break;
            case 0:
                printf("Saindo do programa. Obrigado!\n");
                break;
            default:
                printf("Opção inválida! Escolha entre 1 e 2 ou 0 para sair.\n");
        }
    } while (opcao_principal != 0);

    return 0;
}


