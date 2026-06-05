#include <stdio.h>

int main() {

    float num1;
    float num2;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch (operacao) {

        case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;

        case '-':
            printf("Resultado: %.2f\n", num1 - num2);
            break;

        case '*':
            printf("Resultado: %.2f\n", num1 * num2);
            break;

        case '/':
            printf("Resultado: %.2f\n", num1 / num2);
            break;

        default:
            printf("Operacao invalida.\n");
    }

    return 0;
}
