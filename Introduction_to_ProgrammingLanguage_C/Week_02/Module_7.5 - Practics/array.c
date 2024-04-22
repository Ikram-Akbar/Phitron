#include<stdio.h>
int main()
{
    int digits[5];
    int n = 11;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        scanf("%d",&digits[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%d\n",digits[i]);
        if(n == digits[i])
        {
            printf("Element has found index: %d \n",i);
        }
        else
        {
            printf("Not Found\n");
        }
    }
    
    
    return 0;
}