/* 
2. Write a C program to compute the sum of the first 10 natural numbers.
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55

*/

#include<stdio.h>
int main()
{
    int i, n,sum = 0;
    scanf("%d",&n);
    printf("The first %d natural number is :\n", n);
    for ( i = 1; i <=n; i++)
    {
      sum += i;
      printf("%d ",i);
    }
   
    printf("\nThe Sum is : %d\n",sum);

    return 0;
}