#include <stdio.h>
#include "funcoes.h"

int main() {
    int opcao_principal;

    do {
        printf("\n=== Conversor de Unidades ===\n");
        printf("Escolha o tipo de conversor:\n");
        printf("1. Conversor de Comprimento\n");
        printf("2. Conversor de Temperatura\n");
        printf("3. Conversor de Velocidade\n");
        printf("4. Conversor de Potência\n");
        printf("5. Conversor de Massa\n");
        printf("6. Conversor de Tempo\n");
        printf("7. Conversor de Área\n");
        printf("0. Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao_principal);

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
            case 0:
                printf("Saindo do programa. Obrigado!\n");
                break;
            default:
                printf("Opção inválida! Escolha entre 0 e 7.\n");
        }
    } while (opcao_principal != 0);

    return 0;
}