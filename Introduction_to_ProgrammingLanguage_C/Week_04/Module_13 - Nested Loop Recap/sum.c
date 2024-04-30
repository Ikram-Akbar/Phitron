#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int target_sum;
    scanf("%d", &target_sum);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int found = 0;
    // Iterate through the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target_sum) {
                printf("Pair found: %d, %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    // If no pair is found
    if (!found ) {
        printf("No pairs found that sum up to the target value.\n");
    }

    return 0;
}
