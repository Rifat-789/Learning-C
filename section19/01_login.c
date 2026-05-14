#include<stdio.h>
#include<string.h>

int main(){

    char corrUser[] = "Rifat";
    char corrPassword[] = "123456";

    char username[20];
    char password[20];

    char message[30];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, corrUser) == 0 && strcmp(password, corrPassword) == 0){

        strcpy(message, "Welcome ");

        strcat(message, username);

        strcat(message, "\n\nLogin Successful!");

        printf("\n%s\n", message);
    }

    else{
        printf("\nInvalid Username or Password!\n");
    }


    return 0;
}