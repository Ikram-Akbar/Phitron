#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    int case_1 = a+b*c;
    int case_2 = a+b-c;
    int case_3 = a-b+c;
    int case_4 = a-b*c;
    int case_5 = a*b+c;
    int case_6 = a*b-c;
    if((case_1 == d )|| (case_2 == d)|| (case_3 == d) || (case_4 == d) || (case_5 == d) || (case_6 == d))
    {
        printf("YES\n");
    }
    else
    {
       printf("NO\n");
    }
    
    return 0;
}