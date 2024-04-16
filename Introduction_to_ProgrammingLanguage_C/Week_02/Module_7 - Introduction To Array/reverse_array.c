#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int ages[size];
    for(int i=0; i<size; i++)
    {
      scanf("%d",&ages[i]);  
    }

    for (int i=size-1 ; i >= 0; i--)
    {
      printf("%d\n",ages[i]);
    }
    
    return 0;
}