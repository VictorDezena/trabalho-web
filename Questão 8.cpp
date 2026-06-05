#include <stdio.h> // biblioteca que serve para inserir o arquivo de cabeçalho padrão de entrada e saída

int main() { // Início da função principal

    float celsius; // Armazena a temperatura em Celsius
    float fahrenheit; // Armazena a temperatura convertida para Fahrenheit

    printf("Digite a temperatura em Celsius: "); // Solicita a temperatura em Celsius
    scanf("%f", &celsius); // Lê a temperatura digitada

    fahrenheit = (9 * celsius / 5) + 32; // aplica a fórmula de conversão

    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit); // exibe a temperatura convertida

    return 0; // encerra o programa com sucesso

} // Fim da função principal
