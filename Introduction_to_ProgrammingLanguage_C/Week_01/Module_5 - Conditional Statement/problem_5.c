#include<stdio.h>
int main()
{
    char user_input;
    scanf("%c", &user_input); 
    
    if(user_input >= 48 && user_input <= 57) 
    {
        printf("IS DIGIT");
    }
    else
    {
       if(user_input >= 97 && user_input <= 122 ){
            printf("ALPHA\nIS SMALL");
       }
       else
       {
        printf("ALPHA\nIS CAPITAL");
       }
    }
    return 0;
}


/* 
#include<stdio.h>
int main()
{
    char user_input;
    
    printf("Enter a character: ");
    scanf("%c", &user_input); // Assuming user inputs a character
    
    if(user_input >= '0' && user_input <= '9') 
    {
        printf("Digit");
    }
    else if(user_input >= 'a' && user_input <= 'z')
    {
        printf("ALPHA\nIS SMALL");
    }
    else if(user_input >= 'A' && user_input <= 'Z')
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else
    {
        printf("Invalid input");
    }
    
    return 0;
}



 */