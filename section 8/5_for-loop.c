#include<stdio.h>
#include<unistd.h>

int main(){

    // for loops = repeat some code a limited times

   /* for (int i = 2; i <= 10; i+=2)
    {
        printf("%d\n", i);
    }
    */

    for (int i = 10; i >= 0; i--)
    {
        sleep(1);
        printf("%d\n", i);
    }

    printf("HAPPY NEW YEAR!");

    return 0;
}