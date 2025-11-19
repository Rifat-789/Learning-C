#include<stdio.h>

void birthday(int *age);

                            // pointer = stores the memory address of another variable. 
                            // benefit = help avoide waisting memory by allowing you to pass address of a large data structure instead of
                            //            copying the entire data.
int main(){

    int age = 25;
    int *pAge = &age;            // This is how you create a pointer

    birthday(pAge);

    printf("You are now %d years old", age);

    return 0;
}

void birthday(int *age){  // pass by reference to work
    (*age)++;             // dereference age and return the value
}