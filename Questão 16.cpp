#include <stdio.h>//Biblioteca de entrada e saída de dados 

  

int main() {//Inicio da função principal  

    int numero, i;//numero guarda o valor digitado  

    long long fatorial = 1;//Cria a variável que armazenará o resultado do fatorial. 
    
    printf("Digite um numero: ");//Exibe imagens  

    scanf("%d", &numero);//Le o número  

  

    for(i = 1; i <= numero; i++) {//Repete de 1 até o número informado 

        fatorial *= i;//Multiplica o valor atual pelo próximo número 

    } 

  

    printf("%d! = %lld\n", numero, fatorial);//Exibe imagens  

  

    return 0;//Finaliza o programa 

} 
