#include <stdio.h>
void maxxNmin(int arr[], int s)
{
    int minn = arr[0];
    int maxx = arr[0];

    for (int i = 0; i < s; i++)
    {
        if (arr[i] >= maxx)
        {
            maxx = arr[i];
        }

        if (arr[i] <= minn)
        {
            minn = arr[i];
        }
    }
    printf("%d %d ", minn,maxx);
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
    maxxNmin(arr,n);

    return 0;
}