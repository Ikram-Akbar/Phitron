#include <stdio.h>
int main()
{
    int ar[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("ar[%d][%d] ", i, j);
        }
        printf("\n");
    }

    return 0;
}

/*
 output: 
 
ar[0][0] ar[0][1] ar[0][2] ar[0][3] ar[0][4]
ar[1][0] ar[1][1] ar[1][2] ar[1][3] ar[1][4]
ar[2][0] ar[2][1] ar[2][2] ar[2][3] ar[2][4]
ar[3][0] ar[3][1] ar[3][2] ar[3][3] ar[3][4]
ar[4][0] ar[4][1] ar[4][2] ar[4][3] ar[4][4]

 */