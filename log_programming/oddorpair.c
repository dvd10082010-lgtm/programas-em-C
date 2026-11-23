#include <stdio.h>

int main() {
  int i,cont_pair = 0,cont_odd = 0;
  printf("=====\ninsert the integer value\n=====\n-> here:\n");
  scanf("%d",&i);

  while (i != 0) {
      if ((i % 2) == 0 ) {
        printf("the value inserted %d is pair!", i);
        cont_pair++;
      }
      else if ((i % 2 )== 1) {
        printf("the value %d is odd ", i);
        cont_odd++;
      }
    printf("=====\ninsert the integer value\n=====\n-> here:\n");
    scanf("%d",&i);
  }
  printf("the cont of odd values is: %d\n",cont_odd);
  printf("the cont of pair value is %d\n", cont_pair);

  return 0;
}
