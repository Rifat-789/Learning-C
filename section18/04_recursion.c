#include<stdio.h>

int powNum(int base, int power){
    if (power > 0){
        return base * powNum(base, power - 1);
    }

    else {
        return 1;
    }
}

int main(){

    int base = 5, power = 3, result;

    result = powNum(base, power);

    printf("%d", result);

    return 0;
}