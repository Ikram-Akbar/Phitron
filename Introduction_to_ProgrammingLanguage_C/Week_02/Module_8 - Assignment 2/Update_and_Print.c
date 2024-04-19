#include<stdio.h>

int main()
{
    int n, x, v;
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n ; i++)
    {
        scanf("%d", &numbers[i]);
    }
    scanf("%d %d", &x, &v);
    
    numbers[x] = v;

    
    for (int i = n - 1; i >= 0; i--) 
    {
        printf("%d ", numbers[i]); 
    }  
    
    return 0;
}
