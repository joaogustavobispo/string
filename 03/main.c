#include <stdio.h>
int main()
{
    char nome[50], end[100];
    int telefone, idade;

    printf("Onde mora? ");
    scanf("%s", end); //atribui o valor digitado à endereço até encontrar um Enter (\n)

    printf("Interessante... e qual o seu nome? ");
    scanf("%s", nome); //atribui o valor digitado ao nome, porém não aceita espaços

    printf("Quantos anos voce tem? ");
    scanf("%d", &idade); //atribui o valor digitado à idade

    printf("E seu telefone? ");
    scanf("%d", &telefone); //atribui o valor digitado à telefone

    //Escreve a string juntando todos os parâmetros
    printf("Seu nome e %s, tem %d anos, mora na %s e seu telefone e %d.", nome, idade, end, telefone);
    return 0;
}