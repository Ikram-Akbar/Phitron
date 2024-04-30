#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    printf("arr --> 0 th index er Address:  %p\n", &arr[0]);
    // same result will print : arr
    printf("arr --> 0 th index er Address:  %p\n", arr);

    printf(" arr --> 0 th index er value: %d\n", arr[0]);
    // dereference : *arr
    printf("arr --> 0 th index er value: %d\n", *arr);

    // How to get Next value from an array :
    printf("1th --> value: %d\n", arr[1]);
    printf("1th --> value: %d\n", *(arr + 1));
    printf("1th --> value: %d\n", *(1 + arr));
    printf("1th --> value: %d\n", 1 [arr]);

    return 0;
}