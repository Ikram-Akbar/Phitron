#include<stdio.h>
int sum (int n1, int n2)
{
   int res = n1 + n2;
   return res;
}
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int res = sum(n1,n2);
    printf("%d",res);
    return 0;
}