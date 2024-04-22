#include <stdio.h>

int main() {
    int count, target;
    
    // Input the number of elements in the array and the target number
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &count) != 1 || count <= 0) {
        printf("Invalid input for count. Exiting...\n");
        return 1;
    }

    printf("Enter the target number: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input for target. Exiting...\n");
        return 1;
    }
    
    // Input the array elements
    int numbers[count];
    printf("Enter %d integers separated by spaces: ", count);
    for (int i = 0; i < count; i++) {
        if (scanf("%d", &numbers[i]) != 1) {
            printf("Error reading input. Exiting...\n");
            return 1;
        }
    }

    // Linear search for the target number
    int ans = -1;
    for (int i = 0; i < count; i++) {
        if (numbers[i] == target) {
            ans = i;
            break;
        }
    }
    
    // Output the result
    printf("Index of first occurrence of %d: %d\n", target, ans);
    
    return 0;
}
