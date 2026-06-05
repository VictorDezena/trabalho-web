#include <stdio.h> // Inclui a biblioteca de entrada e saída de dados 

  

int main() { // Início da função principal 

  

    int matriz[2][2]; // Declara uma matriz de 2 linhas e 2 colunas 

    int i, j; // Variáveis de controle dos laços 

    int soma = 0; // Armazena a soma dos elementos da matriz 

  

    printf("Digite os elementos da matriz 2x2:\n"); // Solicita os valores da matriz 

  

    for (i = 0; i < 2; i++) { // Percorre as linhas da matriz 

  

        for (j = 0; j < 2; j++) { // Percorre as colunas da matriz 

  

            scanf("%d", &matriz[i][j]); // Lê um elemento da matriz 

  

            soma = soma + matriz[i][j]; // Adiciona o elemento à soma 

  

        } // Fim do laço das colunas 

  

    } // Fim do laço das linhas 

  

    printf("Soma dos elementos: %d\n", soma); // Exibe a soma total dos elementos 

  

    return 0; // Encerra o programa corretamente 

  

} // Fim da função principal 
