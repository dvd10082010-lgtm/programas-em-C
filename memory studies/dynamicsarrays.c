#include<stdio.h>
#include<stdlib.h>
#include <stdarg.h> // permite o uso de funções com número variável de argumentos

typedef struct {
    int *intem;
    int size;
    int capacity;
} dyarr;

int *insert_values(int n, ...) {
    va_list args;
    dyarr arr ;
    arr.size = 0;
    arr.intem = NULL;
    arr.capacity = 10;


    // printf("insert the array's initial value\n");
    // scanf("%d",&arr.capacity);

    arr.intem = malloc(sizeof(int) * arr.capacity);

    if (arr.intem == NULL) {
        printf("invalid value");
    }

    else {
        printf("allocated with sucefull\n");
        printf("malloc..");
        va_start(args, n);
        for(int i = 0; i < n; i++) {
            arr.intem[arr.size++] = va_arg(args,int);
            if (arr.size >= arr.capacity) {
                arr.capacity *= 2;  
                arr.intem = realloc(arr.intem,sizeof(int) * arr.capacity);
                if (arr.intem == NULL) {
                    va_end(args);
                    printf("space don´t reached, so, if no memory, no dignity... :(");
                    return arr.intem;
            }
             
            }
        }
        return arr.intem;
    }
}

int main()  {

    return 0;
}

