#include <stdio.h> // biblioteca que serve para inserir o arquivo de cabeçalho padrão de entrada e saída

int main(){ // função principal do programa
	
	int num1; // armazena o primeiro número
	int num2; // armazena o segundo número
	
	printf("Digite o primeiro numero: "); // solicita o primeiro número
	scanf("%d", &num1); // lê o primeiro número
	
	printf("Digite o segundo numero: "); // solicita o segundo número
	scanf("%d", &num2); // lê o segundo número
	
	if (num1 == num2){ // verifica se os números são iguais
		printf("Os numeros sao iguais.\n"); // mostra o resultado caso os números sejam iguais
	} // Fim do bloco if
	
	else if (num1 > num2){ // verifica se o número 1 é maior que o número 2
		printf("O numero 1 e maior que o numero 2"); // mostra o resultado caso o número 1 seja maior que o número 2
	} // Fim do bloco else if
	
	else { // Caso contrário, o segundo é maior
		printf("O numero 1 e menor que o numero 2"); // mostra o resultado caso o número 1 seja menor que o número 2
	} // Fim do bloco else
	
	return 0; // encerra o programa com sucesso
} // Fim da função principal
