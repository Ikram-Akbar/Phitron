#include<stdio.h>
int main()
{
    char alp ;
    scanf("%c",&alp);
    if('a' <= alp && alp <= 'z')
    {
        if( alp == 'z'){
            printf("a");
        }
        else
        {
            char next = alp +1;
            printf("%c",next);
        }

    }
    else
    {
        printf("input a valid characters");
    }
    return 0;
}