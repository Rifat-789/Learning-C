#include<stdio.h>
#include<stdbool.h>

bool ageCheck(int age){

    if (age >= 18)
    {
        return true;
    }
    else{
        return false;
    }
}


int main(){

    int age = 11;

    if (ageCheck(age))
    {
        printf("You may sign in");
    }
    else{
        printf("You need to be 18+ to sign in");
    }
    


    return 0;
}