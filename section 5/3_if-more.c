#include<stdio.h>
#include<string.h>

int main(){

    char name[50] = "";

    printf("Ente your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1 ] = '\0'; // to remove the new line charecter.

    if (strlen(name) == 0)
    {
       printf("You did not enter your name");
    }
    else 
    printf("Hello %s", name);
    


    return 0;
}