#include <stdio.h> // biblioteca que serve para inserir o arquivo de cabeçalho padrão de entrada e saída

int main() { // Função principal do programa

    float num1; // Armazena o primeiro número
    float num2; // Armazena o segundo número

    printf("Digite o primeiro numero: "); // solicita o primeiro número ao usuário
    scanf("%f", &num1); // lê e armazena o primeiro número

    printf("Digite o segundo numero: "); // solicita o segundo número ao usuário
    scanf("%f", &num2); // lê e armazena o segundo número

    printf("Soma: %.2f\n", num1 + num2); // exibe a soma do numero 1 com o numero 2

    printf("Subtracao: %.2f\n", num1 - num2); // exibe a subtração do numero 1 com o numero 2

    printf("Multiplicacao: %.2f\n", num1 * num2); // exibe a multiplicação do numero 1 com o numero 2

    printf("Divisao: %.2f\n", num1 / num2); // exibe a divisão

    return 0; // encerra o programa com sucesso
} // Fim da função principal
