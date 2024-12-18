#include <stdio.h>
#include "funcoes.h"

// Todas as funções de conversão
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

int main() {
    int opcao;
    float valor, resultado;

    do {
        // Menu de opções
        printf("\n=== Conversor de Comprimento ===\n");
        printf("Escolha a conversão desejada:\n");
        printf("1. Metros para Centímetros\n");
        printf("2. Metros para Milímetros\n");
        printf("3. Centímetros para Metros\n");
        printf("4. Milímetros para Metros\n");
        printf("0. Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        // Verificação para saída do programa
        if (opcao == 0) {
            printf("Saindo do programa. Obrigado!\n");
            break;
        }

        // Entrada de valor e processamento
        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);

            // Processamento e saída
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
            printf("Opção inválida! Por favor, escolha entre 1 e 4 ou digite 0 para sair.\n");
        }
    } while (1); // Loop infinito até que a opção 0 seja escolhida

    return 0;
}


