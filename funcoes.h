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

// Funções de conversão de potência
void menu_conversor_potencia();
float watts_para_kilowatts(float watts);
float watts_para_cv(float watts);
float kilowatts_para_watts(float kilowatts);
float kilowatts_para_cv(float kilowatts);
float cv_para_watts(float cv);
float cv_para_kilowatts(float cv);

//Funções de conversão de massa
float quilograma_para_grama(float kg_g);
float quilograma_para_tonelada(float kg_t);
float grama_para_tonelada(float g_t);
float grama_para_quilograma(float g_kg);
float tonelada_para_grama(float t_g);
float tonelada_para_quilograma(float t_kg);

#endif