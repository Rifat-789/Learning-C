#include<stdio.h>

int main(){

                    // (condition) ? value_if_true : value_if_false;

    int x = 5;
    int y = 6;
    int max = (x > y) ? x : y;

    printf("%d", max);

    return 0;
}