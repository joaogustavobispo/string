/*
Fazer uma rotina que aguarda (leia) uma string do teclado e retorna o
valor 1 se a string digitada foi "SIM" e 0 se a string digitada foi "NAO". A
rotina só deve retornar alguma coisa se a string digitada for "SIM" ou
"NAO".
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char string[5];

    printf("SIM OU NAO? ");
    scanf("%s", string);

    if (string[0] == 'S' && string[1] == 'I' && string[2] == 'M')
    {
        printf("SIM");
    }
    else if (string[0] == 'N' && string[1] == 'A' && string[2] == 'O')
    {
        printf("NAO");
    }
    else
    {
        printf("Erro");
    }

    return 0;
}
