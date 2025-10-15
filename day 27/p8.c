#include <stdio.h>

int main() {
    int i, j, n = 4;

    // Upper part of the pattern
    for(i = 1; i <= n; i++) {
        // Print spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the pattern
    for(i = n-1; i >= 1; i--) {
        // Print spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
