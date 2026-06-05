#include <stdio.h> // biblioteca que serve para inserir o arquivo de cabeçalho padrão de entrada e saída


int main() { // Início da função principal

    int numero; // Declara uma variável int para armazenar o número

    printf("Digite um numero inteiro: "); // Solicita um número ao usuário
    scanf("%d", &numero); // Lê o número digitado e armazena na variável numero

    printf("Antecessor: %d\n", numero - 1); // Exibe o número anterior ao digitado
    printf("Sucessor: %d\n", numero + 1); // Exibe o número posterior ao digitado

    return 0; // encerra o programa com sucesso

} // Fim da função principal
