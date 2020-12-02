#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    char frase[40];
    printf("Digite uma frase: ");
    gets(frase);
    strupr(frase);
    printf("\nMAIUSCULA: %s\n\n", frase);
    return 0;
}