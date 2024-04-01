#include<stdio.h>
int main()
{
    int number ;
    scanf("%d",&number);
    if(number >= 0){
        if(number%2 == 0){
            printf("even");
        }
        else{
            printf("odd");
        }
    }
    return 0;
}


/* 
error message : warning: implicit declaration of function 'printf' [-Wimplicit-function-declaration]
    8 |             printf("the number is %d even", number);
--------------------------
solution : 
----------------
I was use wrong header -- 
   #include<stdint.h> 

Use this header --
   #include<stdio.h>

 */