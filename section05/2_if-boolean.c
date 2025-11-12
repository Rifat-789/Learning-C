#include<stdio.h>
#include<stdbool.h>

int main(){

    bool isStudent = false;

    if (isStudent)   // no need to use isStudent == true here.
    {
        printf("You are a student");
    }
    else 
    printf("You are NOT a student");
    


    return 0;
}