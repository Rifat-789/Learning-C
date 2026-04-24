#include<stdio.h>

int main(){

    int myNumbers[5] = {10, 10, 30, 40, 15};
    int *start = &myNumbers[1];
    int *end = &myNumbers[4];

    printf("%ld\n", *end - *start);                 // The difference between actual value of the elements, 5

    printf("%ld\n", end - start);                   // The difference between the position fo the elements as address, 3

    printf("%lp\n", &end - &start);                 // The difference between address values, garbage


    return 0;
}