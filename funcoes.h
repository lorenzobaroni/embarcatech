#ifndef FUNCOES_H
#define FUNCOES_H

// Funções de conversão de comprimento
void menu_conversor_comprimento();
float metros_para_centimetros(float metros);
float metros_para_milimetros(float metros);
float centimetros_para_metros(float centimetros);
float milimetros_para_metros(float milimetros);

// Funções de conversão de temperatura
void menu_conversor_temperatura();
float celsius_para_fahrenheit(float temp);
float celsius_para_kelvin(float temp);
float fahrenheit_para_celsius(float temp);
float fahrenheit_para_kelvin(float temp);
float kelvin_para_celsius(float temp);
float kelvin_para_fahrenheit(float temp);

// Funções de conversão de temperatura
float KilometroHora_para_MetroSegundo(float velocidade);
float KilometroHora_para_MilhaHora(float velocidade);
float MetroSegundo_para_MilhaHora(float velocidade);
float MetroSegundo_para_KilometroHora(float velocidade);
float MilhaHora_para_MetroSegundo(float velocidade);
float MilhaHora_para_KilometroHora(float velocidade);

#endif