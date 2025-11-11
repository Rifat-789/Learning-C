#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(0));

    int min = 10;
    int max = 20;

    int randomNmuber1 = (rand() % (max - min + 1)) + min;   // 2 = maximum number, 1 = minimum number.  change them to change the range.
    int randomNmuber2 = (rand() % (max - min + 1)) + min;
    int randomNmuber3 = (rand() % (max - min + 1)) + min;

    printf("%d %d %d", randomNmuber1, randomNmuber2, randomNmuber3);

    return 0;
}