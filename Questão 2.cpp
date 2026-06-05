#include <stdio.h> // biblioteca que serve para inserir o arquivo de cabeçalho padrão de entrada e saída

int main() { // função principal do programa

    int num1; // variável para armazenar o primeiro número inteiro
    int num2; // variável para armazenar o segundo número inteiro

    printf("Digite o primeiro numero: "); // solicita o primeiro número ao usuário
    scanf("%d", &num1); // lê o número digitado e armazena em num1

    printf("Digite o segundo numero: "); // solicita o segundo número ao usuário
    scanf("%d", &num2); // lê o número digitado e armazena em num2

    printf("Soma: %d\n", num1 + num2); // exibe a soma dos dois números

    printf("Divisao inteira: %d\n", num1 / num2); // exibe a divisão inteira , dividindo o número 1 pelo número 2

    printf("Divisao real: %.2f\n", (float) num1 / num2); // converte num1 para float (casting) e realiza a divisão real

    return 0; // encerra o programa com sucesso
} // Fim da função principal
