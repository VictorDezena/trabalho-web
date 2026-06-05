#include <stdio.h> // biblioteca que serve para inserir o arquivo de cabeçalho padrão de entrada e saída

int main() { // Início da função principal

    int numero; // Declara uma variável inteira para armazenar o número

    printf("Digite um numero: "); // Solicita um número ao usuário
    scanf("%d", &numero); // Lê o número digitado

    if (numero > 0) { // Verifica se o número é maior que zero

        printf("O numero e positivo.\n"); // Exibe que o número é positivo

    } // Fim do bloco if

    else if (numero < 0) { // Verifica se o número é menor que zero

        printf("O numero e negativo.\n"); // Exibe que o número é negativo

    } // Fim do bloco else if

    else { // Executa se o número não for positivo nem negativo

        printf("O numero e zero.\n"); // Exibe que o número é zero

    } // Fim do bloco else

    return 0; // encerra o programa com sucesso

} // Fim da função principal
