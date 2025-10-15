#include <stdio.h>

int main() {
    int n, original, remainder, i, factorial, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;

        factorial = 1;
        for (i = 1; i <= remainder; i++) {
            factorial *= i;
        }

        sum += factorial;
        n /= 10;
    }

    if (sum == original)
        printf("%d is a strong number.\n", original);
    else
        printf("%d is not a strong number.\n", original);

    return 0;
}
