#include <stdio.h>
#include <stdbool.h>

int main(){

    bool isOnline = true;
    bool isStudent = 1;


    printf("%d\n", isOnline);

    if (isOnline)
    {
        printf("You are Online\n");
        /* code */
    }
    else{
        printf("You are Offline\n");
    }



    if (isStudent)
    {
        printf("You are a student\n");
        /* code */
    }
    else{
        printf("You are not a student\n");
    }
    

    return 0;
}
