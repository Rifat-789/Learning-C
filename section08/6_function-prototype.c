#include<stdio.h>
#include<stdbool.h>

bool ageCheck(int age);
void hello(char name[], int age);  // function prototype

int main(){

    hello("Rifat", 21);
    if (ageCheck(21))
    {
        printf("You are an adult");

    }
    else{
        printf("You are not an adult");
    }

    return 0;
}

void hello(char name[], int age){

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age){

    return age >= 18;     /*if(age >= 18){
                                    return true ;
                                }
                            else{
                                    return false;
                                }*/
}