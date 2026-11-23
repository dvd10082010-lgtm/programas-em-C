#include "header.h"
#include "functions.c"
#include <stdio.h>
#include <locale.h> 
#include <string.h>// Biblioteca padrão do C

int main() {
    // Configura o programa para usar a localidade do sistema operacional
    setlocale(LC_ALL, "");

    char array[255];
    int tamanho = sizeof(array);

    fgets(array,sizeof(array),stdin);

    crip(array,tamanho);
    printf("%s",array);
    return 0;
}