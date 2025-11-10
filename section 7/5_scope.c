#include<stdio.h>

        // functions can't read anything outside of their scope

int add(int x, int y){
    int result = x + y;
    return result;
}

int substract(int x, int y){
    int result = x - y;
    return result;
}

int main(){

    int x = 4;
    int y = 3;

    //int result = substract(3, 4);

    int result = substract(x, y);

    printf("%d", result);



    return 0;
}