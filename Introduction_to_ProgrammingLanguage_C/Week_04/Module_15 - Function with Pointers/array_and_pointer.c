#include<stdio.h>
int main()
{
    int arr[5] = {10,20,30,40,50};
    printf("arr --> O th index er Address:  %p\n",&arr[0]);
    //same result will print : arr
    printf("arr --> O th index er Address:  %p\n",arr);
    return 0;
}