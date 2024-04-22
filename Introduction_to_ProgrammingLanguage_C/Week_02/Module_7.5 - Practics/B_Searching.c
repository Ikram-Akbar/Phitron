#include<stdio.h>
int main()
{
     int count,target;
     scanf("%d %d",&count, &target);
     int numbers[count];
    
     
     for(int i = 0; i<count; i++)
     {
        scanf("%d",&numbers[i]);
     }

     int ans = -1;
     for( int i=0; i<count; i++)
     {
        if(numbers[i] == target){
            ans = i;
            break;
        }    
     }
     printf("%d",ans);
    return 0;
}