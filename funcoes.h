#ifndef FUNCOES_H
#define FUNCOES_H

// Funções genéricas para exibição de menu e leitura
int exibir_menu(const char *titulo, const char *opcoes[], int num_opcoes);
float ler_valor(const char *mensagem);

// Funções de conversão de comprimento
float metros_para_centimetros(float metros);
float metros_para_milimetros(float metros);
float centimetros_para_metros(float centimetros);
float milimetros_para_metros(float milimetros);
void executar_conversor_comprimento();

// Funções de conversão de temperatura
float celsius_para_fahrenheit(float celsius);
float celsius_para_kelvin(float celsius);
float fahrenheit_para_celsius(float fahrenheit);
float fahrenheit_para_kelvin(float fahrenheit);
float kelvin_para_celsius(float kelvin);
float kelvin_para_fahrenheit(float kelvin);
void executar_conversor_temperatura();

// Funções de conversão de velocidade
float KilometroHora_para_MetroSegundo(float KilometroHora);
float KilometroHora_para_MilhaHora(float KilometroHora);
float MetroSegundo_para_MilhaHora(float MetroSegundo);
float MetroSegundo_para_KilometroHora(float MetroSegundo);
float MilhaHora_para_MetroSegundo(float MilhaHora);
float MilhaHora_para_KilometroHora(float MilhaHora);
void executar_conversor_velocidade();

// Funções de conversão de potência
float watts_para_kilowatts(float watts);
float watts_para_cv(float watts);
float kilowatts_para_watts(float kilowatts);
float kilowatts_para_cv(float kilowatts);
float cv_para_watts(float cv);
float cv_para_kilowatts(float cv);
void executar_conversor_potencia();

// Funções de conversão de massa
float quilograma_para_grama(float quilograma);
float quilograma_para_tonelada(float quilograma);
float grama_para_quilograma(float grama);
float grama_para_tonelada(float grama);
float tonelada_para_quilograma(float tonelada);
float tonelada_para_grama(float tonelada);
void executar_conversor_massa();

// Funções de conversão de tempo
float horas_para_minutos(float horas);
float minutos_para_horas(float minutos);
float horas_para_segundos(float horas);
float segundos_para_horas(float segundos);
float minutos_para_segundos(float minutos);
float segundos_para_minutos(float segundos);
void executar_conversor_tempo();

// Funções de conversão de área
float metros_para_centimetros_quadrados(float metros);
float centimetros_para_metros_quadrados(float centimetros);
void executar_conversor_area();

#endif // FUNCOES_H
