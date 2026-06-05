#include <stdio.h>//Biblioteca de entrada e saída de dados 

  

int main() {//Inicio da função principal  

  

    int matriz[3][3];//Cria uma matriz 

    int i, j;//    i controla as linhas. 

                    //j controla as colunas. 

  

    for(i = 0; i < 3; i++) {//Percorre as linhas 

  

        for(j = 0; j < 3; j++) {//Percorre as colunas: 

  

            printf("Digite um valor: ");//Exibe um valor 

            scanf("%d", &matriz[i][j]);//Guarda cada número digitado dentro da matriz. 

  

        } 

    } 

  

    printf("Diagonal principal:\n");//Exibe a diagonal principal  

  

    for(i = 0; i < 3; i++) {//Laço para exibir a diagonal 

  

        printf("%d\n", matriz[i][i]);//Exibe os valores da matriz 

  

    } 

  

    return 0;//Finaliza o programa 

} 
