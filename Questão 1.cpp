#include <stdio.h>

int main() { // função principal do programa, onde a execução começa

    int idade; // cria uma variável inteira para armazenar a idade
    float altura; // cria uma variável decimal para armazenar a altura
    char inicial; // cria uma variável para armazenar um único caractere

    printf("Digite sua idade: "); // mostra a mensagem na tela
    scanf("%d", &idade); // lê a idade digitada e guarda na variável idade

    printf("Digite sua altura: "); // mostra a mensagem na tela
    scanf("%f", &altura); // lê a altura digitada e guarda na variável altura

    printf("Digite a inicial do seu nome: "); // pede a inicial do nome
    scanf(" %c", &inicial); // lê um caractere e guarda na variável inicial

    printf("Idade: %d\n", idade); // mostra a idade armazenada
    printf("Altura: %.2f\n", altura); // mostra a altura com 2 casas decimais. Isso acontece pelo uso da %.2f
    printf("Inicial: %c\n", inicial); // mostra a inicial armazenada

    return 0; // encerra o programa mostrando que tudo ocorreu bem
} // Fim da função principal
