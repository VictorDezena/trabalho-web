#include <stdio.h>//Biblioteca de entrada e saída de dados 

  

int main() {//inicio da função principal  

  

    int vetor[5];//Cria um vetor com 5 posições. 

    int i;//Variável usada para controlar as repetições. 

  

    for(i = 0; i < 5; i++) {//Repete 5 vezes. 

        printf("Digite o %d valor: ", i + 1);//Exibe imagem  

        scanf("%d", &vetor[i]);//Guarda o valor digitado na posição atual do vetor. 

    } 

  

    printf("\nElementos do vetor:\n");//Mostra cada elemento armazenado. 

  

    for(i = 0; i < 5; i++) { 

        printf("%d\n", vetor[i]);//Mostra cada elemento armazenado. 

    } 

  

    return 0;//Finaliza o programa 

} 
