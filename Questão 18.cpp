#include <stdio.h> // Inclui a biblioteca de entrada e saída de dados

int main() { // Início da função principal

    int vetor[10]; // Declara um vetor com 10 posições
    int i; // Variável de controle dos laços
    int maior; // Armazena o maior valor encontrado
    int posicao; // Armazena a posição do maior valor

    for (i = 0; i < 10; i++) { // Repete 10 vezes para ler os números

        printf("Digite o %d numero: ", i + 1); // Solicita um número ao usuário
        scanf("%d", &vetor[i]); // Armazena o número no vetor

    } // Fim do laço de leitura

    maior = vetor[0]; // Assume que o primeiro elemento é o maior
    posicao = 0; // Assume que a posição do maior é 0

    for (i = 1; i < 10; i++) { // Percorre o restante do vetor

        if (vetor[i] > maior) { // Verifica se encontrou um valor maior

            maior = vetor[i]; // Atualiza o maior valor
            posicao = i; // Atualiza a posição do maior valor

        } // Fim do if

    } // Fim do laço

    printf("Maior valor: %d\n", maior); // Exibe o maior valor encontrado
    printf("Posicao: %d\n", posicao); // Exibe a posição do maior valor

    return 0; // Encerra o programa corretamente

} // Fim da função principal
