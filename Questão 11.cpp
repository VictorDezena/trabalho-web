#include <stdio.h>// inclui a biblioteca de entrada e saída de dados 

  

int main() { //inicio da função principal  

  

    float nota1, nota2, media; //Cria três variáveis do tipo decimal (float) 

  

    printf("Digite a primeira nota: ");//Mostra uma mensagem pedindo a primeira nota. 

    scanf("%f", &nota1);//Lê a primeira nota digitada 

  

    printf("Digite a segunda nota: ");//Mostra uma mensagem pedindo a segunda nota. 

    scanf("%f", &nota2);//Lê a segunda nota digitada 

  

    media = (nota1 + nota2) / 2;//Calcula a média das duas notas. 

  

    printf("Media = %.2f\n", media);//Mostra a média com duas casas decimais. 

  

    if(media >= 7)//Verifica se a média é maior ou igual a 7. 

        printf("Aprovado\n");//Exibe “Aprovado” 

    else if(media >= 5)//Se não for aprovado, verifica se a média é maior ou igual a 5. 

        printf("Recuperacao\n");//Exibe “Recuperação” 

    else//Se nenhuma das condições anteriores for verdadeira. 

        printf("Reprovado\n");//Exibe “Reprovado” 

  

    return 0;//Encerra o programa corretamente  

  

}//Fim da função principal 
