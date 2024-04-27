#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Printing spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Printing stars for the left side of the pyramid
        for (int k = 1; k <= i; k++) {
            printf("*");
        }

        // Printing spaces between the two parts of the pyramid
        printf(" ");

        // Printing stars for the right side of the pyramid
        for (int l = 1; l <= i; l++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
