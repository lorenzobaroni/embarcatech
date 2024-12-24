# 🚀 Conversor de Unidades

Este é um programa modular em C que permite realizar conversões entre diferentes unidades de medida, como comprimento, temperatura, velocidade, potência, massa, tempo e área. O programa é fácil de usar, com menus interativos que guiam o usuário por todas as opções disponíveis.

## Funcionalidades

O programa oferece os seguintes conversores:

#### Conversor de Comprimento

- Metros para Centímetros
- Metros para Milímetros
- Centímetros para Metros
- Milímetros para Metros

#### Conversor de Temperatura

- Celsius para Fahrenheit
- Celsius para Kelvin
- Fahrenheit para Celsius
- Fahrenheit para Kelvin
- Kelvin para Celsius
- Kelvin para Fahrenheit

#### Conversor de Velocidade

- Km/h para m/s
- Km/h para mph
- m/s para mph
- m/s para Km/h
- mph para m/s
- mph para Km/h

#### Conversor de Potência

- Watts para Quilowatts
- Watts para Cavalos-vapor
- Quilowatts para Watts
- Quilowatts para Cavalos-vapor
- Cavalos-vapor para Watts
- Cavalos-vapor para Quilowatts

#### Conversor de Massa

- Quilograma para Grama
- Quilograma para Tonelada
- Grama para Quilograma
- Grama para Tonelada
- Tonelada para Quilograma
- Tonelada para Grama

#### Conversor de Tempo

- Horas para Minutos
- Minutos para Horas
- Horas para Segundos
- Segundos para Horas
- Minutos para Segundos
- Segundos para Minutos

#### Conversor de Área

- Metros Quadrados para Centímetros Quadrados
- Centímetros Quadrados para Metros Quadrados

#### Testes de Conversores:

- Validação automatizada para garantir que os cálculos de conversão estão corretos.

## Como Funciona

O programa possui um menu principal que permite ao usuário escolher o tipo de conversor que deseja usar. Após selecionar o conversor, o usuário é direcionado para o menu correspondente, onde pode escolher a conversão específica e inserir os valores.

#### Fluxo do Programa

1. O usuário seleciona o tipo de conversor no menu principal.
2. No menu específico, o usuário escolhe a operação desejada.
3. O programa solicita o valor a ser convertido e exibe o resultado da conversão.
4. O usuário pode retornar ao menu principal ou realizar novas conversões.

## Testes de Conversores

O programa inclui uma funcionalidade de testes automatizados para validar a precisão de todas as funções de conversão. A função ```testar_conversores``` executa testes para os conversores de comprimento, temperatura, velocidade, potência, massa, tempo e área.

#### Como Funciona?

O programa utiliza a função auxiliar ```comparar_float``` para verificar se o valor retornado pela função de conversão está dentro de uma tolerância aceitável do valor esperado. Para cada teste realizado, o programa imprime se o resultado foi Aprovado ou Reprovado, indicando qual função passou ou falhou no teste. Cada função de conversão é testada com um conjunto de valores de entrada e resultados esperados para garantir que os cálculos estão corretos.

## Estrutura do Código

- main.c: Contém o menu principal e a lógica de navegação entre os diferentes tipos de conversores.
- funcoes.c: Contém as funções de conversão, as funções auxiliares e a função de testes de conversores.
- funcoes.h: Declaração das funções usadas no programa.

## Compilação e Execução

#### Requisitos

- Compilador GCC (GNU Compiler Collection) ou compatível.

#### Compilação

Para compilar o programa, execute o seguinte comando no terminal:
```
gcc main.c funcoes.c -o conversor
```

#### Execução

Após a compilação, execute o programa com o comando:
```
./conversor
```

## Licença

Este programa foi desenvolvido como um exemplo educacional e pode ser usado livremente para fins de estudo e aprendizado.

## Autores

- LORENZO GIUSEPPE OLIVEIRA BARONI
- LARISSA DA SILVA SANTOS
- LUIZ VICTOR RIBEIRO SANTOS
- MARY NICOLE DE SOUSA MENDES
- ÍTALO ALVES TENÓRIO DE ALMEIDA
- JOÃO PEDRO FERREIRA DE JESUS
- JOÃO PAULO SANTOS LUZ PEREIRA
- FELIPE SILVA QUEIROZ
