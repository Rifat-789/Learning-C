#include<stdio.h>

int main(){

    int temp = -10;

   /* if (temp > 0 && temp < 30)
    {
        printf("The weathr is GOOD");
    }
    else
    printf("The wether is BAD");
    */

    if (temp <= 0 || temp >= 30)
    {
        printf("The temperature is BAD");
    }
    else 
        printf("The temperature is GOOD");
    


    return 0;
}