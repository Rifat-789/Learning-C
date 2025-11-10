#include<stdio.h>

int main(){

    int num = 1;

    do
    {
        printf("Enter a number greater than zero: ");
        scanf("%d", &num);
    } while (num <= 0);
    

    return 0;
}