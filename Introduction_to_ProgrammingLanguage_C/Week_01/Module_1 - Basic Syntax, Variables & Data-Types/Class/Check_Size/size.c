#include <stdio.h>

int main() {
    char c = ' ssss';
    // warning: character constant too long for its type

    printf("Memory allocation for char variable: %zu bytes\n", sizeof(c));

    return 0;
}
