#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", & n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", & arr[i]);
        }
        int res;
        scanf("%d", & res);
        int length = sizeof(arr) / sizeof(int);
        int flag = 0;
        for (int i = 0; i < length; i++) {
            if (arr[i] == res) {
                flag = 1;
                break;
            }
        }

        if (flag == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}