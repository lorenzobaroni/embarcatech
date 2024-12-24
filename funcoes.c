#include "funcoes.h"
#include <stdio.h>
#include <math.h>

// Funções genéricas para exibição de menu e leitura

int exibir_menu(const char *titulo, const char *opcoes[], int num_opcoes) {
    int opcao;
    while (1) {
        printf("\n=== %s ===\n", titulo);
        for (int i = 0; i < num_opcoes; i++) {
            printf("%s\n", opcoes[i]);
        }
        printf("Digite a opção desejada: ");

        if (scanf("%d", &opcao) == 1) {
            return opcao;
        } else {
            printf("Entrada inválida! Por favor, insira um número.\n");
            while (getchar() != '\n'); // Limpa o buffer
        }
    }
}

float ler_valor(const char *mensagem) {
    float valor;
    printf("%s", mensagem);
    while (scanf("%f", &valor) != 1) {
        printf("Entrada inválida! Por favor, insira um número válido.\n");
        while (getchar() != '\n');
    }
    return valor;
}

// Funções de conversão de comprimento

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

// Função para executar o conversor de comprimento
void executar_conversor_comprimento() {
    const char *menu_comprimento[] = {
        "1. Metros para Centímetros",
        "2. Metros para Milímetros",
        "3. Centímetros para Metros",
        "4. Milímetros para Metros",
        "0. Voltar ao Menu Principal"
    };

    int opcao;
    do {
        do {
            opcao = exibir_menu("Conversor de Comprimento", menu_comprimento, 5);

            if (opcao < 0 || opcao > 4) { // Verifica se a opção está fora do intervalo
                printf("Opção inválida! Por favor, escolha entre 0 e 4.\n");
            }
        } while (opcao < 0 || opcao > 4); // Requer uma entrada válida

        if (opcao == 0) {
            printf("Voltando ao menu principal...\n");
            break;
        }

        float valor = ler_valor("Digite o valor a ser convertido: ");
        float resultado;

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
            default:
                printf("Opção inválida!\n");
        }
    } while (1);
}

// Funções de conversão de temperatura

float celsius_para_fahrenheit(float celsius) {
    return (celsius * 1.8) + 32;
}

float celsius_para_kelvin(float celsius) {
    return celsius + 273.15;
}

float fahrenheit_para_celsius(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

float fahrenheit_para_kelvin(float fahrenheit) {
    return ((fahrenheit - 32) * 5.0 / 9.0) + 273.15;
}

float kelvin_para_celsius(float kelvin) {
    return kelvin - 273.15;
}

float kelvin_para_fahrenheit(float kelvin) {
    return ((kelvin - 273.15) * 9.0 / 5.0) + 32;
}

// Função para executar o conversor de temperatura
void executar_conversor_temperatura() {
    const char *menu_temperatura[] = {
        "1. Celsius para Fahrenheit",
        "2. Celsius para Kelvin",
        "3. Fahrenheit para Celsius",
        "4. Fahrenheit para Kelvin",
        "5. Kelvin para Celsius",
        "6. Kelvin para Fahrenheit",
        "0. Voltar ao Menu Principal"
    };

    int opcao;
    do {
        do {
            opcao = exibir_menu("Conversor de Temperatura", menu_temperatura, 7);

            if (opcao < 0 || opcao > 6) { // Verifica se a opção está fora do intervalo
                printf("Opção inválida! Por favor, escolha entre 0 e 6.\n");
            }
        } while (opcao < 0 || opcao > 6); // Requer uma entrada válida

        if (opcao == 0) {
            printf("Voltando ao menu principal...\n");
            break;
        }

        float valor = ler_valor("Digite a temperatura a ser convertida: ");
        float resultado;

        switch (opcao) {
            case 1:
                resultado = celsius_para_fahrenheit(valor);
                printf("%.2f°C equivalem a %.2f°F.\n", valor, resultado);
                break;
            case 2:
                resultado = celsius_para_kelvin(valor);
                printf("%.2f°C equivalem a %.2fK.\n", valor, resultado);
                break;
            case 3:
                resultado = fahrenheit_para_celsius(valor);
                printf("%.2f°F equivalem a %.2f°C.\n", valor, resultado);
                break;
            case 4:
                resultado = fahrenheit_para_kelvin(valor);
                printf("%.2f°F equivalem a %.2fK.\n", valor, resultado);
                break;
            case 5:
                resultado = kelvin_para_celsius(valor);
                printf("%.2fK equivalem a %.2f°C.\n", valor, resultado);
                break;
            case 6:
                resultado = kelvin_para_fahrenheit(valor);
                printf("%.2fK equivalem a %.2f°F.\n", valor, resultado);
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (1);
}

// Funções de conversão de velocidade
float KilometroHora_para_MetroSegundo(float KilometroHora) {
    return KilometroHora / 3.6;
}

float KilometroHora_para_MilhaHora(float KilometroHora) {
    return KilometroHora / 1.60934;
}

float MetroSegundo_para_MilhaHora(float MetroSegundo) {
    return MetroSegundo * 2.23694;
}

float MetroSegundo_para_KilometroHora(float MetroSegundo) {
    return MetroSegundo * 3.6;
}

float MilhaHora_para_MetroSegundo(float MilhaHora) {
    return MilhaHora / 2.23694;
}

float MilhaHora_para_KilometroHora(float MilhaHora) {
    return MilhaHora * 1.60934;
}

// Função para executar o conversor de velocidade
void executar_conversor_velocidade() {
    const char *menu_velocidade[] = {
        "1. Km/h para m/s",
        "2. Km/h para mph",
        "3. m/s para mph",
        "4. m/s para Km/h",
        "5. mph para m/s",
        "6. mph para Km/h",
        "0. Voltar ao Menu Principal"
    };

    int opcao;
    do {
        do{
            opcao = exibir_menu("Conversor de Velocidade", menu_velocidade, 7);
            if (opcao < 0 || opcao > 6) { // Verifica se a opção está fora do intervalo
                printf("Opção inválida! Por favor, escolha entre 0 e 6.\n");
            }
        } while (opcao < 0 || opcao > 6); // Requer uma entrada válida

        if (opcao == 0) {
            printf("Voltando ao menu principal...\n");
            break;
        }

        float valor = ler_valor("Digite o valor a ser convertido: ");
        float resultado;

        switch (opcao) {
            case 1:
                resultado = KilometroHora_para_MetroSegundo(valor);
                printf("%.2f Km/h equivalem a %.2f m/s.\n", valor, resultado);
                break;
            case 2:
                resultado = KilometroHora_para_MilhaHora(valor);
                printf("%.2f Km/h equivalem a %.2f mph.\n", valor, resultado);
                break;
            case 3:
                resultado = MetroSegundo_para_MilhaHora(valor);
                printf("%.2f m/s equivalem a %.2f mph.\n", valor, resultado);
                break;
            case 4:
                resultado = MetroSegundo_para_KilometroHora(valor);
                printf("%.2f m/s equivalem a %.2f Km/h.\n", valor, resultado);
                break;
            case 5:
                resultado = MilhaHora_para_MetroSegundo(valor);
                printf("%.2f mph equivalem a %.2f m/s.\n", valor, resultado);
                break;
            case 6:
                resultado = MilhaHora_para_KilometroHora(valor);
                printf("%.2f mph equivalem a %.2f Km/h.\n", valor, resultado);
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (1);
}

// Funções de conversão de potência

float watts_para_kilowatts(float watts) {
    return watts / 1000;
}

float watts_para_cv(float watts) {
    return watts / 735.5;
}

float kilowatts_para_watts(float kilowatts) {
    return kilowatts * 1000;
}

float kilowatts_para_cv(float kilowatts) {
    return (kilowatts * 1000) / 735.5;
}

float cv_para_watts(float cv) {
    return cv * 735.5;
}

float cv_para_kilowatts(float cv) {
    return (cv * 735.5) / 1000;
}

// Função para executar o conversor de potencia
void executar_conversor_potencia() {
    const char *menu_potencia[] = {
        "1. Watts para Quilowatts",
        "2. Watts para Cavalos-vapor",
        "3. Quilowatts para Watts",
        "4. Quilowatts para Cavalos-vapor",
        "5. Cavalos-vapor para Watts",
        "6. Cavalos-vapor para Quilowatts",
        "0. Voltar ao Menu Principal"
    };

    int opcao;
    do {
        do{
            opcao = exibir_menu("Conversor de Potência", menu_potencia, 7);
            if (opcao < 0 || opcao > 6) { // Verifica se a opção está fora do intervalo
                printf("Opção inválida! Por favor, escolha entre 0 e 6.\n");
            }
        } while (opcao < 0 || opcao > 6); // Requer uma entrada válida

        if (opcao == 0) {
            printf("Voltando ao menu principal...\n");
            break;
        }

        float valor = ler_valor("Digite o valor a ser convertido: ");
        float resultado;

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
            default:
                printf("Opção inválida!\n");
        }
    } while (1);
}

// Funções de conversão de massa

float quilograma_para_grama(float quilograma) {
    return quilograma * 1000;
}

float quilograma_para_tonelada(float quilograma) {
    return quilograma / 1000;
}

float grama_para_quilograma(float grama) {
    return grama / 1000;
}

float grama_para_tonelada(float grama) {
    return grama / 1000000;
}

float tonelada_para_quilograma(float tonelada) {
    return tonelada * 1000;
}

float tonelada_para_grama(float tonelada) {
    return tonelada * 1000000;
}

// Função para executar o conversor de massa
void executar_conversor_massa() {
    const char *menu_massa[] = {
        "1. Quilograma para Grama",
        "2. Quilograma para Tonelada",
        "3. Grama para Quilograma",
        "4. Grama para Tonelada",
        "5. Tonelada para Quilograma",
        "6. Tonelada para Grama",
        "0. Voltar ao Menu Principal"
    };

    int opcao;
    do {
        do{
            opcao = exibir_menu("Conversor de Massa", menu_massa, 7);
            if (opcao < 0 || opcao > 6) { // Verifica se a opção está fora do intervalo
                printf("Opção inválida! Por favor, escolha entre 0 e 6.\n");
            }
        } while (opcao < 0 || opcao > 6); // Requer uma entrada válida

        if (opcao == 0) {
            printf("Voltando ao menu principal...\n");
            break;
        }

        float valor = ler_valor("Digite o valor a ser convertido: ");
        float resultado;

        switch (opcao) {
            case 1:
                resultado = quilograma_para_grama(valor);
                printf("%.2f Quilogramas equivalem a %.2f Gramas.\n", valor, resultado);
                break;
            case 2:
                resultado = quilograma_para_tonelada(valor);
                printf("%.2f Quilogramas equivalem a %.2f Toneladas.\n", valor, resultado);
                break;
            case 3:
                resultado = grama_para_quilograma(valor);
                printf("%.2f Gramas equivalem a %.2f Quilogramas.\n", valor, resultado);
                break;
            case 4:
                resultado = grama_para_tonelada(valor);
                printf("%.2f Gramas equivalem a %.2f Toneladas.\n", valor, resultado);
                break;
            case 5:
                resultado = tonelada_para_quilograma(valor);
                printf("%.2f Toneladas equivalem a %.2f Quilogramas.\n", valor, resultado);
                break;
            case 6:
                resultado = tonelada_para_grama(valor);
                printf("%.2f Toneladas equivalem a %.2f Gramas.\n", valor, resultado);
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (1);
}

// Funções de conversão de tempo

float horas_para_minutos(float horas) {
    return horas * 60;
}

float minutos_para_horas(float minutos) {
    return minutos / 60;
}

float horas_para_segundos(float horas) {
    return horas * 3600;
}

float segundos_para_horas(float segundos) {
    return segundos / 3600;
}

float minutos_para_segundos(float minutos) {
    return minutos * 60;
}

float segundos_para_minutos(float segundos) {
    return segundos / 60;
}

// Função para executar o conversor de tempo
void executar_conversor_tempo() {
    const char *menu_tempo[] = {
        "1. Horas para Minutos",
        "2. Minutos para Horas",
        "3. Horas para Segundos",
        "4. Segundos para Horas",
        "5. Minutos para Segundos",
        "6. Segundos para Minutos",
        "0. Voltar ao Menu Principal"
    };

    int opcao;
    do {
        do{
            opcao = exibir_menu("Conversor de Tempo", menu_tempo, 7);
            if (opcao < 0 || opcao > 6) { // Verifica se a opção está fora do intervalo
                printf("Opção inválida! Por favor, escolha entre 0 e 6.\n");
            }
        } while (opcao < 0 || opcao > 6); // Requer uma entrada válida

        if (opcao == 0) {
            printf("Voltando ao menu principal...\n");
            break;
        }

        float valor = ler_valor("Digite o valor a ser convertido: ");
        float resultado;

        switch (opcao) {
            case 1:
                resultado = horas_para_minutos(valor);
                printf("%.2f Horas equivalem a %.2f Minutos.\n", valor, resultado);
                break;
            case 2:
                resultado = minutos_para_horas(valor);
                printf("%.2f Minutos equivalem a %.2f Horas.\n", valor, resultado);
                break;
            case 3:
                resultado = horas_para_segundos(valor);
                printf("%.2f Horas equivalem a %.2f Segundos.\n", valor, resultado);
                break;
            case 4:
                resultado = segundos_para_horas(valor);
                printf("%.2f Segundos equivalem a %.2f Horas.\n", valor, resultado);
                break;
            case 5:
                resultado = minutos_para_segundos(valor);
                printf("%.2f Minutos equivalem a %.2f Segundos.\n", valor, resultado);
                break;
            case 6:
                resultado = segundos_para_minutos(valor);
                printf("%.2f Segundos equivalem a %.2f Minutos.\n", valor, resultado);
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (1);
}

// Funções de conversão de área

float metros_para_centimetros_quadrados(float metros) {
    return metros * 10000;
}

float centimetros_para_metros_quadrados(float centimetros) {
    return centimetros / 10000;
}

// Função para executar o conversor de área
void executar_conversor_area() {
    const char *menu_area[] = {
        "1. Metros Quadrados para Centímetros Quadrados",
        "2. Centímetros Quadrados para Metros Quadrados",
        "0. Voltar ao Menu Principal"
    };

    int opcao;
    do {
        do{
            opcao = exibir_menu("Conversor de Área", menu_area, 3);
            if (opcao < 0 || opcao > 2) { // Verifica se a opção está fora do intervalo
                printf("Opção inválida! Por favor, escolha entre 0 e 2.\n");
            }
        } while (opcao < 0 || opcao > 2); // Requer uma entrada válida

        if (opcao == 0) {
            printf("Voltando ao menu principal...\n");
            break;
        }

        float valor = ler_valor("Digite o valor a ser convertido: ");
        float resultado;

        switch (opcao) {
            case 1:
                resultado = metros_para_centimetros_quadrados(valor);
                printf("%.2f Metros Quadrados equivalem a %.2f Centímetros Quadrados.\n", valor, resultado);
                break;
            case 2:
                resultado = centimetros_para_metros_quadrados(valor);
                printf("%.2f Centímetros Quadrados equivalem a %.2f Metros Quadrados.\n", valor, resultado);
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (1);
}

// Função para comparar se a diferença entre os dois números estão dentro da tolerância (0.01)
int comparar_float(float valor1, float valor2, float tolerancia) {
    return fabs(valor1 - valor2) <= tolerancia;
}

// Função para testar os conversores
void testar_conversores() {
    printf("\n=== Testando Conversores ===\n");

    int total_testes = 0, testes_aprovados = 0;

    // Função auxiliar para validar os testes
    #define TESTAR(func, entrada, esperado, tolerancia) \
        do { \
            total_testes++; \
            if (comparar_float(func(entrada), esperado, tolerancia)) { \
                printf(#func "(%.2f) → Aprovado\n", entrada); \
                testes_aprovados++; \
            } else { \
                printf(#func "(%.2f) → Falhou. Esperado: %.2f\n", entrada, esperado); \
            } \
        } while (0)

    // Testando Conversor de Comprimento
    printf("\n[Testando Conversor de Comprimento]\n");
    TESTAR(metros_para_centimetros, 1.0, 100.0, 0.01);
    TESTAR(metros_para_milimetros, 2.0, 2000.0, 0.01);
    TESTAR(centimetros_para_metros, 100.0, 1.0, 0.01);
    TESTAR(milimetros_para_metros, 1000.0, 1.0, 0.01);

    // Testando Conversor de Temperatura
    printf("\n[Testando Conversor de Temperatura]\n");
    TESTAR(celsius_para_fahrenheit, 0.0, 32.0, 0.01);
    TESTAR(celsius_para_kelvin, 0.0, 273.15, 0.01);
    TESTAR(fahrenheit_para_celsius, 32.0, 0.0, 0.01);
    TESTAR(kelvin_para_celsius, 273.15, 0.0, 0.01);

    // Testando Conversor de Velocidade
    printf("\n[Testando Conversor de Velocidade]\n");
    TESTAR(KilometroHora_para_MetroSegundo, 36.0, 10.0, 0.01);
    TESTAR(KilometroHora_para_MilhaHora, 80.0, 49.71, 0.01);
    TESTAR(MetroSegundo_para_KilometroHora, 10.0, 36.0, 0.01);

    // Testando Conversor de Potência
    printf("\n[Testando Conversor de Potência]\n");
    TESTAR(watts_para_kilowatts, 1000.0, 1.0, 0.01);
    TESTAR(watts_para_cv, 735.5, 1.0, 0.01);
    TESTAR(cv_para_watts, 1.0, 735.5, 0.01);
    TESTAR(kilowatts_para_cv, 1.0, 1.36, 0.01);

    // Testando Conversor de Massa
    printf("\n[Testando Conversor de Massa]\n");
    TESTAR(quilograma_para_grama, 1.0, 1000.0, 0.01);
    TESTAR(grama_para_quilograma, 1000.0, 1.0, 0.01);
    TESTAR(tonelada_para_grama, 1.0, 1000000.0, 0.01);

    // Testando Conversor de Tempo
    printf("\n[Testando Conversor de Tempo]\n");
    TESTAR(horas_para_minutos, 1.0, 60.0, 0.01);
    TESTAR(minutos_para_segundos, 1.0, 60.0, 0.01);
    TESTAR(segundos_para_horas, 3600.0, 1.0, 0.01);

    // Testando Conversor de Área
    printf("\n[Testando Conversor de Área]\n");
    TESTAR(metros_para_centimetros_quadrados, 1.0, 10000.0, 0.01);
    TESTAR(centimetros_para_metros_quadrados, 10000.0, 1.0, 0.01);

    // Resumo dos testes
    printf("\n=== Resumo dos Testes ===\n");
    printf("Total de Testes: %d\n", total_testes);
    printf("Testes Aprovados: %d\n", testes_aprovados);
    printf("Testes Reprovados: %d\n", total_testes - testes_aprovados);
}
