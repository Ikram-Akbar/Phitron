/* 
4. Write a program in C to read 10 numbers from the keyboard and find their sum and average.
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000
*/

#include<stdio.h>
int main()
{
    int i , n,num,sum = 0;
    float avg;
    scanf("%d",&n);
    for ( i =1 ; i <= n; i++)
    {
      printf("Number-%d :", i);
      scanf("%d",&num);
      sum += num;
    }
    avg = sum/n;

    printf("The sum of %d no is : %d",n,sum);
    printf("The Average is : %f",avg);
    
    return 0;
}