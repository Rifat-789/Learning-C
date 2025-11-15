#include<stdio.h>
#include<ctype.h>

int main(){

    char questions[][100] = {"What is the largest planet on solar system?", 
                             "What is the hottest planet?",
                             "What planet has the most moons?",
                             "Is the earth flat?"};

    char options[][100] = {"A. Jupeter\nB. Saturn\nC. Uranus\nD. Neptune",
                           "A. Marcury\nB. Venus\nC. Earth\nD. Mars",
                           "A. Earth\nB. Jupetur\nC. Mars\nD. Saturn",
                           "A.Yes\nB. No\nC. Maybe\nD. Sometimes"};

    char answerKey[] = {'A', 'B', 'D', 'B'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    for (int i = 0; i < questionCount; i++)
    {
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("\nEnter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);  // This converts the lower class char to upper class

        if (guess == answerKey[i])
        {
            printf("Correct answer!\n");
            score++;
        }
        else{
            printf("Wrong!");
        }     
    }
    
    printf("\nYou have scored %d out of %d points\n", score, questionCount);
    
    

    return 0;
}