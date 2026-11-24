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
    arr.capacity = 4;


    // printf("insert the array's initial value\n");
    // scanf("%d",&arr.capacity);

    arr.intem = calloc(arr.capacity, sizeof(int));

    if (arr.intem == NULL) {
        printf("invalid value");
    }

    else {
        printf("allocated with sucefull\n");
        printf("calloc[ing]..");
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

void print_array(int *arr, int size) {
    printf("array values: ");
    for (int i = 0; i < size; i++) {
        printf("%d\n ", arr[i]);
    }
    printf("\n");
}

int main()  {
    int *arr = insert_values(23, 26, 760, 282, 251, 229, 143, 755, 105, 693, 759, 914, 559, 90, 605, 433,291,2918,282928,2182189,28281,282762,2721);
    print_array(arr, 23);
    free(arr);
    return 0;
}

