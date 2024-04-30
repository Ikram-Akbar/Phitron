#include<stdio.h>

void fun (int numbers[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",numbers[i]);
    }
    
}
int main()
{
    int numbers [5] = {10,20,30,40,50};
    fun(numbers,5);

    return 0;
}