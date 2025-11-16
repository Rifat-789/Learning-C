#include<stdio.h>

typedef int number;    // gives a nickname to the current datatypes
typedef char string[100];
typedef char initials[3];

int main(){

    initials user1 = "JS";
    initials user2 = "AS";
    initials user3 = "TS";
    initials user4 = "AM";

    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

    return 0;
}