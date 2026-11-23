#include <stdio.h>
#include <string.h>

int seila(){
    char input[100];
    

    printf("bom dia desgraçado!,já deu hj?");
    fgets(input,sizeof(input),stdin);

    if (strcmp(input,"sim") == 0  ) {
        printf("gay");
    }
    else {
        printf("então vai dar é, hum....");
    }
    return 0;
} 