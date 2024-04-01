#include<stdio.h>
int main ()
{
    int number = 25;
    scanf("%d",&number);
    if(number < 0){
        printf("negative");
    }
    else if (number == 0)
    {
      printf("zero");
    }
    else if (number>0)
    {
      printf("positive");
    }
    else
    {
        printf(" input a valid number ");
    }
    
    return 0;
}