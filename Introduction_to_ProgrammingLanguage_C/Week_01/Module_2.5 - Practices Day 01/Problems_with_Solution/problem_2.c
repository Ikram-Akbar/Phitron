#include<stdio.h>
int main()
{
    int frist_num, second_num;
    scanf("%d %d", &frist_num, &second_num);

    int add = frist_num+second_num;
    int sub = frist_num - second_num;
    int mul = frist_num * second_num; 
    float dvd =frist_num*1.0 / second_num ;

    printf("%d + %d = %d \n", frist_num,second_num,add);
    printf("%d - %d = %d \n", frist_num,second_num,sub);
    printf("%d * %d = %d \n", frist_num,second_num,mul);
    printf("%d / %d = %0.2f ", frist_num,second_num,dvd);
    return 0;
}