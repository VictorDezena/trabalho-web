#include <stdio.h> // biblioteca que serve para inserir o arquivo de cabeçalho padrão de entrada e saída

int main() { // Início da função principal

    char nome[50]; // Declara um vetor de caracteres para armazenar o nome
    int idade; // Declara uma variável inteira para armazenar a idade
    char cidade[50]; // Declara um vetor de caracteres para armazenar a cidade

    printf("Digite seu nome: "); // Solicita o nome do usuário
    scanf("%s", nome); // Lê o nome digitado

    printf("Digite sua idade: "); // Solicita a idade do usuário
    scanf("%d", &idade); // Lê a idade digitada

    printf("Digite sua cidade: "); // Solicita a cidade do usuário
    scanf("%s", cidade); // Lê a cidade digitada

    printf("\nDados cadastrados:\n"); // Mostera um título para os dados cadastrados
    printf("Nome: %s\n", nome); // mostra o nome informado
    printf("Idade: %d\n", idade); // mostra a idade informada
    printf("Cidade: %s\n", cidade); // mostra a cidade informada

    return 0; // encerra o programa com sucesso
} // Fim da função principal
