#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar(); 

    for (int k = 0; k < t; k++) {
        int cap = 0, sm = 0, dig = 0;
        char str[10001];
        fgets(str, 10000, stdin);

        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                cap++;
            }
            else if (str[i] >= 'a' && str[i] <= 'z') {
                sm++;
            }
            else if (str[i] >= '0' && str[i] <= '9') {
                dig++;
            }
        }
        printf("%d %d %d\n", cap, sm, dig);
    }

    return 0;
}
