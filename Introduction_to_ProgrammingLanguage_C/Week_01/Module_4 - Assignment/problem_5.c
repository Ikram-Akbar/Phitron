#include<stdio.h>
int main()
{
    int balance,remain_balance;
    scanf("%d",&balance);
    if(balance>1000){
        printf("I will buy Punjabi\n");
        remain_balance = balance - 1000;
        if(remain_balance>= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes");
        }
    }
    else
    {
        printf("Bad luck!");
    }
    return 0;
}