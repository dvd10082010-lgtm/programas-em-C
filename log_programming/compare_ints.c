#include<stdio.h>
int main() {
    int n,n2;
    printf("insert int values:\n");
    scanf("%d%d", &n,&n2);

    if (n > n2) {
        printf("%i is bigger than %i", n,n2);
    }
    else if (n2 > n) {
        printf("o valor de %d é maior do %d\n", n2 , n);
    }
    else {
        printf("%d is equal to %d", n,n2);
    }

return 0;
}