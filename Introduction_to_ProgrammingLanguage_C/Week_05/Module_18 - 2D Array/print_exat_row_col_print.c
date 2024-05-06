#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];

    // input :

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    } 

    int exeat;
    scanf("%d",&exeat);
    for(int i = 0; i<col; i++)
    {
        printf("%d ",arr[exeat][i]);
    }
    return 0;
}