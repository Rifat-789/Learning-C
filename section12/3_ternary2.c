#include<stdio.h>

int main(){

    int number = 9;

    printf("%d is %s", number,  (number % 2 == 0) ? "Even" : "Odd");


    return 0;
}