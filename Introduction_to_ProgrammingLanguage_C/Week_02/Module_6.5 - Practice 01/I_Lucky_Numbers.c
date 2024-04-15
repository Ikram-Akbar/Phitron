#include<stdio.h>
int main()
{
    int a;
    scanf("%d ", &a);
    if(a >= 10 && a <= 99)
    {
        int first_number = a%10;
        int second_number = a/10;
        if((first_number % second_number == 0)|| (second_number % first_number == 0))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    } 
    return 0;
}