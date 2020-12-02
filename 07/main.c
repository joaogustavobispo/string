#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *num_to_str(int number, int size)
{
    char *str = NULL;
    str = malloc((size + 1) * sizeof(char));
    itoa(number, str, 10);
    return str;
}

void soletrando(char *str_int, int index)
{
    char *x;

    if (str_int[index] == '1')
    {
        printf("um");
    }
    else if (str_int[index] == '2')
    {
        printf("dois");
    }
    else if (str_int[index] == '3')
    {
        printf("tres");
    }
    else if (str_int[index] == '4')
    {
        printf("quatro");
    }
    else if (str_int[index] == '5')
    {
        printf("cinco");
    }
    else if (str_int[index] == '6')
    {
        printf("seis");
    }
    else if (str_int[index] == '7')
    {
        printf("sete");
    }
    else if (str_int[index] == '8')
    {
        printf("oito");
    }
    else if (str_int[index] == '9')
    {
        printf("nove");
    }
    else
    {
        printf("zero");
    }
}

int main(void)
{
    char *str_int = NULL;
    int num;

    printf("Insira um numero de ate 3 digitos: ");
    scanf("%d", &num);

    str_int = num_to_str(num, 3);

    printf("%s: ", str_int);
    for (int i = 0; i < strlen(str_int); i++)
    {
        soletrando(str_int, i);
        if (i == strlen(str_int) - 1)
        {
            printf(".");
        }
        else
        {
            printf(", ");
        }
    }

    free(str_int);

    return 0;
}