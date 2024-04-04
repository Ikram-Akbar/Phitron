#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number>= 0){
        if(number%3 == 0){
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}