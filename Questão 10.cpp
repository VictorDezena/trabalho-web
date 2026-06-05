#include <stdio.h> // Inclui a biblioteca de entrada e saída de dados

int main() { // Início da função principal

    int numero; // Declara uma variável inteira para armazenar o número

    printf("Digite um numero: "); // Solicita um número ao usuário
    scanf("%d", &numero); // Lê o número digitado

    if (numero % 2 == 0) { // Verifica se o resto da divisão por 2 é igual a zero

        printf("O numero e par.\n"); // Exibe que o número é par

    } // Fim do bloco if

    else { // Executa se a condição do if for falsa

        printf("O numero e impar.\n"); // Exibe que o número é ímpar

    } // Fim do bloco else

    return 0; // Encerra o programa corretamente

} // Fim da função principal
