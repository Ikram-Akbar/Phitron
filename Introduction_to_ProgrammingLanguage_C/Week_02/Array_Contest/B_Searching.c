#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target_value;
    scanf("%d", &target_value);
    int result = -1; // Default result if target value is not found

    // Check if target value is present in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == target_value) {
           result = i;
            break;
        }
    }

    // Print the result
    printf("%d\n", result);

    return 0;
}
