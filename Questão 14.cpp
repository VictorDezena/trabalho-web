#include <stdio.h>//Biblioteca de entrada e saída de dados 

  

int main() {//Inicio da função principal  

    int numero, i;//numero guarda o valor digitado. 

    printf("Digite um numero: ");//Exibe a imagem  

    scanf("%d", &numero);//Le o número  

  

    for(i = 1; i <= 10; i++) {//Repete 10 vezes 

        printf("%d x %d = %d\n", numero, i, numero * i);//Calcula cada multiplicação da tabuada. 

    } 

  

    return 0;//Finaliza o programa 

} 
