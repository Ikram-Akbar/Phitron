#include <stdio.h>

void odd_even() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int e_count = 0;
    int o_count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            e_count++;
        } else {
            o_count++;
        }
    }

    printf("%d %d\n", e_count, o_count);
}

int main() {
    odd_even();
    return 0;
}
