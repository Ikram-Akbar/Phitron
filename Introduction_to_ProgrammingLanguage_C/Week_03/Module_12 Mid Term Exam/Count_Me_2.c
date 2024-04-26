#include <stdio.h>
#include <string.h>

int main() {
  
    char str[100001];
    int count = 0;
    fgets(str, 100000, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
