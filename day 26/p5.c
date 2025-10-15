#include <stdio.h>

int main() {
    int i, j, spaces;
    for(i = 5; i >= 1; i--) {
        // Print leading spaces
        for(spaces = 1; spaces < i; spaces++) {
            printf(" ");
        }
        // Print numbers
        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
