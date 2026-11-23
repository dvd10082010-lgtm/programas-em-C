#include <stdio.h>
#include <string.h>

int main(void){
    char ent[100],ent2[100];
    while (ent[0] != '0') {

        printf("\ninsert your first str here ->:\n");
        fgets(ent,sizeof(ent),stdin);
        
        printf("insert your second str here ->:\n");
        fgets(ent2,sizeof(ent2),stdin);

        ent2[strcspn(ent2, "\n")] = '\0';
        ent[strcspn(ent, "\n")] = '\0';
        
        if (strcmp(ent,ent2) == 0) {
            printf("%s = %s\n", ent,ent2);
        }
        else {
            printf("%s <> %s\n", ent,ent2);
        }
    }
} 