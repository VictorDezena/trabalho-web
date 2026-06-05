#include <stdio.h> // biblioteca que serve para inserir o arquivo de cabeçalho padrão de entrada e saída

int main() { // função principal do programa

    float media; // Declara a variável media do tipo float
    int frequencia; // Declara a variável frequencia do tipo int

    printf("Digite a media do aluno: "); // Exibe uma mensagem solicitando a média do aluno
    scanf("%f", &media); // Lê a média digitada pelo usuário e armazena na variável media

    printf("Digite a frequencia do aluno: "); // Exibe uma mensagem solicitando a frequência do aluno
    scanf("%f", &frequencia); // Lê a frequência digitada pelo usuário e armazena na variável frequencia

    if (media >= 7 && frequencia >= 75) { // Verifica se a média é maior ou igual a 7 E a frequência é maior ou igual a 75

        printf("Aluno aprovado.\n"); // Exibe a mensagem de aprovação

    } // Fim do bloco do if

    else { // Executa caso a condição do if seja falsa

        printf("Aluno reprovado.\n"); // Exibe a mensagem de reprovação

    } // Fim do bloco else

    return 0; // encerra o programa com sucesso

} // Fim da função principal
