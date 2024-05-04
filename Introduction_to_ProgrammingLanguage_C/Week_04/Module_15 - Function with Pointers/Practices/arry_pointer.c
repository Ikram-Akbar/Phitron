#include <stdio.h>
int main()
{
    int myNumbers[4] = {25, 50, 75, 100};
    for (int i = 0; i < 4; i++)
    {
      printf("%p \n",&myNumbers[i]);
    }
    /* In C, the name of an array, is actually a pointer to the first element of the array. */
    return 0;
}