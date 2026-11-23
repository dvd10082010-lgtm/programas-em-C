#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;

    p = calloc(3,sizeof(*p));

    printf("valor original: %d\n", *p);

    scanf("\n%d\n%d\n%d", &*p,&* p+ 1,&*p +2);

    printf("\nendereço na mémoria: \n-%p\n-%p\n-%p", (void*)&p[0],(void*)&p[1],(void*)&p[2]);
    printf("\n\nvalores inseridos: \n%d\n%d\n%d\n\n\n", p[0],p[1],p[2]);

    char *x;

    x = malloc(sizeof(*x));

    printf("valor original: %c\n", *x);

    scanf("\n%c\n%c\n%c", &*x, &*x+ 1, &*x +2);

    printf("\nendereço na mémoria: \n-%p\n-%p\n-%p", (void*)&x[0],(void*)&x[1],(void*)&x[2]);
    printf("\n\nvalores inseridos: \n%c\n%c\n%c\n\n\n", x[0],x[1],x[2]);

}