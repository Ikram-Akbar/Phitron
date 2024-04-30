#include<stdio.h>
int main()
{
    // take input from user: 

    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }

    // make the array element reverse: 

    int i = 0; 
    int j = n-1;
    while (i<j)
    {
       int temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
       
       i++;
       j--;
    }

    //print the array in reverse way : 

    for (int i = 0; i < n; i++)
    {
       printf("%d ",arr[i]);
    }

    return 0;
}