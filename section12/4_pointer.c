#include<stdio.h>

int main(){

    int hours = 11;
    int minutes = 3;
    char *meridium = (hours < 12) ? "AM" : "PM" ;  // this is a pointer that does the same thing as ternary but in this form

    printf("%02d:%02d %s", hours, minutes, meridium);

    return 0;
} 