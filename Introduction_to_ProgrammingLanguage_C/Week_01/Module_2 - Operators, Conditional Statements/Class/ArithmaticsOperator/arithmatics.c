#include<stdio.h>
int main()
{
    int frist_number,second_number;
    scanf("%d%d",&frist_number,&second_number);
    int sum = frist_number + second_number;
    int mns = frist_number - second_number;
    int mlt = frist_number * second_number;
    // int dvd = frist_number/second_number;
    float dvd = frist_number*1.0/second_number;
    
    int mod = second_number%frist_number;
    printf("The sum of Two Number: %d \nThe subtructs of Two Number: %d \nThe Multiflication of Two Number: %d \nThe devided value of Two Number: %f \nThe Modulus of Two Number: %d \n ", sum,mns,mlt,dvd,mod);

    /* 
    -------------
    output:
    --------------
    The sum of Two Number: 42 
    The subtructs of Two Number: 18 
    The Multiflication of Two Number: 360 
    The devided value of Two Number: 2 
    The devided value of Two Number: 2.500000 
    The Modulus of Two Number: 12 
     */
    return 0;
}