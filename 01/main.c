/*
1. Fazer um programa em "C" que lê uma string qualquer de no máximo 80
caracteres e imprime:
    a) Quantos caracteres tem o string;
    b) Quantos caracteres são de pontuação;
    c) Quantos caracteres são números;
    d) Quantos caracteres são espaço em branco
*/

#include <stdio.h>
#include <string.h>

void qtdCaracteres(char string[80]);
void qtdPontuacao(char string[80]);
void qtdNumeros(char string[80]);
void qtdEspacos(char string[80]);

int main(int argc, char const *argv[])
{
    char string[80];

    printf("Insira uma string de no maximo 80 caracteres:\n");
    fgets(string, 80, stdin); //leitura da string
    printf("Frase usada: %s ", string);

    qtdCaracteres(string);
    qtdPontuacao(string);
    qtdNumeros(string);
    qtdEspacos(string);

    return 0;
}

// retorna a quantidade de caracteres
void qtdCaracteres(char string[80])
{
    printf("\nTotal de caracteres: %d", strlen(string));
}

// retorna a quantidade de pontuação
void qtdPontuacao(char string[80])
{
    int contPon = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] >= 33 && string[i] <= 47)
        {
            contPon++;
        }
    }

    printf("\nTotal de pontuacao no texto: %d", (contPon));
}

void qtdNumeros(char string[80])
{
    int contNum = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] >= 48 && string[i] <= 57)
        {
            contNum++;
        }
    }

    printf("\nTotal de numeros no texto: %d", (contNum));
}

// retorna a quantidade de espaços
void qtdEspacos(char string[80])
{
    int contSpa = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == ' ')
        {
            contSpa++;
        }
    }

    printf("\nTotal de espacos no texto: %d", (contSpa));
}