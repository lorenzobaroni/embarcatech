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
float celsius_para_fahrenheit(float temp) {
    return (temp * 1.8) + 32;
}

float celsius_para_kelvin(float temp) {
    return temp + 273.15;
}

float fahrenheit_para_celsius(float temp) {
    return (5.0/9.0) * (temp - 32);
}

float fahrenheit_para_kelvin(float temp) {
    return ((temp - 32) * 5.0/9.0) + 273.15;
}

float kelvin_para_celsius(float temp) {
    return temp - 273.15;
}

float kelvin_para_fahrenheit(float temp) {
    return ((temp - 273.15) * 9.0/5.0) + 32;
}

// Função para exibir o menu de conversão de temperatura
void exibir_menu_temperatura() {
    printf("\n=== Conversor de Temperatura ===\n");
    printf("1. Celsius para fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. fahrenheit para Celsius\n");
    printf("4. fahrenheit para Kelvin\n");
    printf("5. Kelvin para Celsius\n");
    printf("6. Kelvin para fahrenheit\n");
    printf("0. Voltar ao Menu Principal\n");
    printf("Digite a opção desejada: ");
}
// Função para o menu de conversão de temperatura
void menu_conversor_temperatura() {
    int opcao;
    float valor, resultado;

    do {
        exibir_menu_temperatura(); // Exibe o menu de temperatura
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Voltando ao Menu Principal...\n");
            break;
        }

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite a temperatura a ser convertida: ");
            scanf("%f", &valor);

            switch (opcao) {
                case 1:
                    resultado = celsius_para_fahrenheit(valor);
                    printf("%.2fC equivalem a %.2fF.\n", valor, resultado);
                    break;
                case 2:
                    resultado = celsius_para_kelvin(valor);
                    printf("%.2fC equivalem a %.2fK.\n", valor, resultado);
                    break;
                case 3:
                    resultado = fahrenheit_para_celsius(valor);
                    printf("%.2fF equivalem a %.2fC.\n", valor, resultado);
                    break;
                case 4:
                    resultado = fahrenheit_para_kelvin(valor);
                    printf("%.2fF equivalem a %.2fK.\n", valor, resultado);
                    break;
                case 5:
                    resultado = kelvin_para_celsius(valor);
                    printf("%.2fK equivalem a %.2fC.\n", valor, resultado);
                    break;
                case 6:
                    resultado = kelvin_para_fahrenheit(valor);
                    printf("%.2fK equivalem a %.2fF.\n", valor, resultado);
                    break;
            }
        } else {
            printf("Opção inválida! Escolha entre 1 e 6 ou 0 para voltar.\n");
        }
    } while (1);
}

// Funções de conversão de potência
float watts_para_kilowatts(float watts) {
    return watts / 1000;
}

float watts_para_cv(float watts) {
    return watts / 735.5; // 1 cv = 735.5 watts
}

float kilowatts_para_watts(float kilowatts) {
    return kilowatts * 1000;
}

float kilowatts_para_cv(float kilowatts) {
    return kilowatts * 1000 / 735.5;
}

float cv_para_watts(float cv) {
    return cv * 735.5;
}

float cv_para_kilowatts(float cv) {
    return cv * 735.5 / 1000;
}

// Exibir menu de potência
void exibir_menu_potencia() {
    printf("\n=== Conversor de Potência ===\n");
    printf("1. Watts para Quilowatts\n");
    printf("2. Watts para Cavalos-vapor\n");
    printf("3. Quilowatts para Watts\n");
    printf("4. Quilowatts para Cavalos-vapor\n");
    printf("5. Cavalos-vapor para Watts\n");
    printf("6. Cavalos-vapor para Quilowatts\n");
    printf("0. Voltar ao Menu Principal\n");
    printf("Digite a opção desejada: ");
}

// Menu para conversor de potência
void menu_conversor_potencia() {
    int opcao;
    float valor, resultado;

    do {
        exibir_menu_potencia(); // Exibe o menu de potência
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Voltando ao Menu Principal...\n");
            break;
        }

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);

            switch (opcao) {
                case 1:
                    resultado = watts_para_kilowatts(valor);
                    printf("%.2f Watts equivalem a %.2f Quilowatts.\n", valor, resultado);
                    break;
                case 2:
                    resultado = watts_para_cv(valor);
                    printf("%.2f Watts equivalem a %.2f Cavalos-vapor.\n", valor, resultado);
                    break;
                case 3:
                    resultado = kilowatts_para_watts(valor);
                    printf("%.2f Quilowatts equivalem a %.2f Watts.\n", valor, resultado);
                    break;
                case 4:
                    resultado = kilowatts_para_cv(valor);
                    printf("%.2f Quilowatts equivalem a %.2f Cavalos-vapor.\n", valor, resultado);
                    break;
                case 5:
                    resultado = cv_para_watts(valor);
                    printf("%.2f Cavalos-vapor equivalem a %.2f Watts.\n", valor, resultado);
                    break;
                case 6:
                    resultado = cv_para_kilowatts(valor);
                    printf("%.2f Cavalos-vapor equivalem a %.2f Quilowatts.\n", valor, resultado);
                    break;
            }
        } else {
            printf("Opção inválida! Escolha entre 1 e 6 ou 0 para voltar.\n");
        }
    } while (1);
}


// Função main
int main() {
    int opcao_principal;
    do {
        // Menu principal
        printf("\n=== Conversor de Unidades ===\n");
        printf("Escolha o tipo de conversor:\n");
        printf("1. Conversor de Comprimento\n");
        printf("2. Conversor de Temperatura\n");
        printf("3. Conversor de Potência\n");
        printf("0. Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao_principal);

        switch (opcao_principal) {
            case 1:
                menu_conversor_comprimento();
                break;
            case 2:
                menu_conversor_temperatura();
                break;
            case 3:
                menu_conversor_potencia();
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


