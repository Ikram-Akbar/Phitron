#include <stdio.h>

int main() {
    int n, i, j, space;
    scanf("%d", &n);

    space = n - 1;

    // Print upper half of the diamond
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= space; j++)
            printf(" ");
        space--;
        if (i % 2 == 0) {
            for (j = 1; j <= 2 * i - 1; j++)
                printf("-");
        } else {
            for (j = 1; j <= 2 * i - 1; j++)
                printf("#");
        }
        printf("\n");
    }

    space = 1;

    // Print lower half of the diamond
    for (i = 1; i <= n - 1; i++) {
        for (j = 1; j <= space; j++)
            printf(" ");
        space++;
        if ((n - i) % 2 == 0) {
            for (j = 1; j <= 2 * (n - i) - 1; j++)
                printf("-");
        } else {
            for (j = 1; j <= 2 * (n - i) - 1; j++)
                printf("#");
        }
        printf("\n");
    }

    return 0;
}
