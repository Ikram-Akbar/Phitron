#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    for (int i = 0; i < t; i++) {
        int m1, m2, days;
        scanf("%d %d %d", & m1, & m2, & days);
        int total_emp = m1 + m2;
        int total_days = (days * m1) / total_emp;
        int fewer_days = days - total_days;
        printf("%d\n", fewer_days);
    }

    return 0;
}