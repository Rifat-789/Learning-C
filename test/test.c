#include<stdio.h>

int main(){

    printf("Hello there\nTell me What are we playing today?");
    printf("Let me give you some options\n1. True or False\n2. Rock Paper Sissors\n3. Predict the future.");
    printf("\nEnter your choice: ");

    int choice = 0;
    scanf("%d", &choice);

    do{
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif


        switch (choice){
        case 1:
        
            break;
        case 2:
        
            break;
        case 3:
        
            break;
        
    
        default:
            printf("Invalid choice. Please choose from 1-3!");
            break;
        }
    } while(choice != 4);

    return 0;
}

void trueFalse(char answer[], char correctAns[]){
    
}