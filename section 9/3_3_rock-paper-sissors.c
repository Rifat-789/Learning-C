#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int getComputerchoice();
int getUserchoice();
void checkWinner(int userChoice, int computerChoice);


int main(){

    srand(time(NULL));

    printf("*** ROCK PAPER SCICCORS ***\n");

    int userChoice = getUserchoice();
    int computerChoice = getComputerchoice();

    switch (userChoice)
    {
    case 1:
        printf("You chose ROCK!\n");
        break;
    case 2:
        printf("You chose PAPER!\n");
        break;
    case 3:
        printf("You chose SCISSOR!\n");
        break;
    }

    switch (computerChoice)
    {
    case 1:
        printf("Computer chose ROCK!\n");
        break;
    case 2:
        printf("Computer chose PAPER!\n");
        break;
    case 3:
        printf("Computer chose SCISSOR!\n");
        break;
    }

    checkWinner(userChoice, computerChoice);


    return 0;
}

int getComputerchoice(){
    return (rand() % 3) + 1;
}

int getUserchoice(){
    
    int choice = 0;

    do
    {
        printf("Choose an option\n");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSOR\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

    } while (choice < 1 || choice > 3);
    return choice;
    
}

void checkWinner(int userChoice, int computerChoice){
    

    if (userChoice == computerChoice)
    {
        printf("It's a TIE!");
    }
    else if (userChoice == 1 && computerChoice == 3)
    {
        printf("You WIN!");
    }
    else if (userChoice == 2 && computerChoice == 1)
    {
        printf("You WIN!");
    }
    else if (userChoice == 3 && computerChoice == 2)
    {
        printf("You WIN!");
    }
    else
    printf("You LOSE!");
    
    
}