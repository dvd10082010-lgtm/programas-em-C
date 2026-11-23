#include<stdio.h>
#include<stdlib.h>
#include <stdarg.h>

typedef struct {
    int *intem;
    int size;
    int capacity;
} dyarr;

void insert_values(int n, ...) {
    va_list args;
    dyarr arr ;
    arr.size = 0;
    arr.intem = 4;


    printf("insira o tamanho inicial do array:");
    scanf("%d",&arr.capacity);

    arr.intem = malloc(sizeof(int) * arr.capacity);

    if (arr.intem = NULL) {
        printf("valor inválido");
    }

    else {
        printf("allocated with sucefull");
        printf("malloc");
        va_start(args, n);
        for(int i = 0; i < arr.capacity; i++) {
            arr.intem[arr.size++] += va_arg(args,int);
        }
    }

}

