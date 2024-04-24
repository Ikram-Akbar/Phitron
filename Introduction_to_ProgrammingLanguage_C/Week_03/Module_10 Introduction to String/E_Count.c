#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000001];
    scanf("%s",a);
    int res = 0;
    for (int i = 0; i < strlen(a); i++)
    {
       res = res + (a[i]- '0');
    }
    printf("%d",res);
     
    return 0;
}