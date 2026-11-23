#include <stdio.h>

int main(void) {
char c[] = "Hi nigga!";
for (int i = 0; i < sizeof(c) + 1; i++) {
    printf("%c\n", (c[i]));  // output is the value in memory addres - s0x7fffffffd809 (h)
}
}