#include<stdio.h>
#include<stdbool.h>
int main()
{
    char name = 'i';
    int roll = 78;
    float height = 5.5;
    bool isStudent = true;
    printf("My Name is %s , My Class Roll is %d, My Height is %f, and I'm a student %d ",name,roll,height,isStudent);
    printf("\n Memory : %zu  bytes", sizeof(name));

    return 0;
}