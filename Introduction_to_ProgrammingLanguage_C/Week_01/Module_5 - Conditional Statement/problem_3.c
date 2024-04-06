#include<stdio.h>
int main()
{
    char responce ;
    scanf("%c",&responce);
    if(responce >= 97 && responce <= 122)
    {
        int result = responce - 32;
        printf("%c",result);
    } 
    else
    {
        int result = responce + 32;
        printf("%c",result);
    }
    return 0;
}