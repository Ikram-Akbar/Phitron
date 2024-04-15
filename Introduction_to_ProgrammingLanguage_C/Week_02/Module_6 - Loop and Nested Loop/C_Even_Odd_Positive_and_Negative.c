#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int pos = 0, neg = 0, even = 0, odd = 0 ;
    int val;
    for (int i = 1; i <= n; i++)
    {
      scanf("%d",&val);
      if(val %2 == 0){
        even++;
      }
      else
      {
        odd++;
      }

      if(val > 0)
      {
        pos++;
      }
      else if( val < 0)
      {
        neg++;
      }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d ",even,odd,pos,neg);
    
     
    return 0;
}