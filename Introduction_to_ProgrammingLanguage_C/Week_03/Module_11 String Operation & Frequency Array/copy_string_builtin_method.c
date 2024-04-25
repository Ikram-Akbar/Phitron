#include<stdio.h>
#include<string.h>
int main()
{
    char x[100],y[100];
    scanf("%s %s",x,y);
    strcpy(x,y);
    printf("%s %s",x,y);
     
    return 0;
}