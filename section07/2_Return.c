#include<stdio.h>

/*int square(int num){
    int relust = num * num;

    return relust;
}
    */

    double cube(double num){

        return num * num * num;
    }

double square(double num){
    return num * num;
}


int main(){

    double x = cube(2);
    double y = cube(3);
    double z = cube(4);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);




    return 0;
}