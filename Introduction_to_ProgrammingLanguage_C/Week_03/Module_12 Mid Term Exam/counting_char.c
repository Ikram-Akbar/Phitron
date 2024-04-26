#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int count[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int val = s[i] - 97;
        count[val]++;
    }

    for (int i = 0; i < 26; i++)
    {
    //    printf("%d - %d \n",i,count[i]);
        if (count[i] != 0)
        {
           printf("%c - %d \n",i+97,count[i]);
        }
        
      
    }
    
    
     
    return 0;
}