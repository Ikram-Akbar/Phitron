#include<stdio.h>
int main()
{
    float myNum = 5.2235;
    printf(" your floating Number is %f \n", myNum);
    // your floating Number is 5.223500
    printf(" your floating Number is %0.0f \n", myNum);
    // your floating Number is 5
    printf(" your floating Number is %0.1f \n", myNum);
    // your floating Number is  5.2 
    printf(" your floating Number is %0.2f \n", myNum);
    //  your floating Number is 5.22
    printf(" your floating Number is %0.3f \n", myNum);
    // your floating Number is 5.223 
    printf(" your floating Number is %0.4f \n", myNum);
    // your floating Number is 5.2235
    printf(" your floating Number is %0.5f \n", myNum);
    // your floating Number is 5.22350
     
    return 0;
}