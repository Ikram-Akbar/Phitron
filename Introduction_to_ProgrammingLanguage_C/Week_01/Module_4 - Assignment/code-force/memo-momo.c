#include<stdio.h>
int main()
{
    int memo_num,momo_num,number;
    scanf("%d %d %d ",&memo_num,&momo_num,&number);

    if((memo_num % number == 0) && (momo_num % number == 0))
    {
        printf("Both");
    }
    else if (memo_num % number == 0)
    {
        printf("Memo");
    }
    else if (momo_num % number == 0)
    {
        printf("Momo");
    }
    else
    {
        printf("No One");
    }
    return 0;
    
}