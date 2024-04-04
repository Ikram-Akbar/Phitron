#include<stdio.h>
int main()
{
    int tk ;
    scanf(" %d", &tk);
    if(tk >= 5000 )
    {
        printf(" let's go to Cox's bazar !! \n");
        if(tk >= 10000 )
        {
            printf(" now , go to the Saint Martain \n");
        }
        else
        {
            printf(" let's back to Home ");
        }

    }
    else
    {
        printf(" Barite thako ar code koro !! ");
    }
    return 0;
}