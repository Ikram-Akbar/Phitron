#include <stdio.h>

int main() {
    int n, pos_sum = 0, neg_sum = 0;
    int num;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &num); 
        if (num >= 0) {
            pos_sum += num;
        } else {
            neg_sum += num;
        }
    }

    printf("%d %d", pos_sum, neg_sum);
    return 0;
}
