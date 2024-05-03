#include <stdio.h>

int main() {
    int r;
    scanf("%d",&r);
    
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= r - i; j++) {
            printf(" ");
        }
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
