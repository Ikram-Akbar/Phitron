#include <stdio.h>

void myFunc(int arr[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    printf("%d ", arr[i]);
    myFunc(arr, n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    myFunc(arr, n, 0);
    return 0;
}
